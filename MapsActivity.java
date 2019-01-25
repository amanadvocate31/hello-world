package aman.com.ub1;

import android.Manifest;
import android.app.PendingIntent;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.location.Location;
import android.media.MediaPlayer;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.v4.app.ActivityCompat;
import android.support.v4.app.FragmentActivity;
import android.os.Bundle;
import android.support.v4.app.NotificationCompat;
import android.support.v4.app.NotificationManagerCompat;
import android.support.v4.content.ContextCompat;
import android.util.Log;
import android.widget.Toast;

import com.google.android.gms.location.FusedLocationProviderClient;
import com.google.android.gms.location.LocationServices;
import com.google.android.gms.maps.CameraUpdateFactory;
import com.google.android.gms.maps.GoogleMap;
import com.google.android.gms.maps.OnMapReadyCallback;
import com.google.android.gms.maps.SupportMapFragment;
import com.google.android.gms.maps.model.CameraPosition;
import com.google.android.gms.maps.model.LatLng;
import com.google.android.gms.maps.model.LatLngBounds;
import com.google.android.gms.maps.model.Marker;
import com.google.android.gms.maps.model.MarkerOptions;
import com.google.android.gms.maps.model.Polyline;
import com.google.android.gms.maps.model.PolylineOptions;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.google.firebase.auth.AuthResult;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.auth.FirebaseUser;
import com.google.firebase.firestore.CollectionReference;
import com.google.firebase.firestore.DocumentChange;
import com.google.firebase.firestore.DocumentReference;
import com.google.firebase.firestore.DocumentSnapshot;
import com.google.firebase.firestore.EventListener;
import com.google.firebase.firestore.FirebaseFirestore;
import com.google.firebase.firestore.FirebaseFirestoreException;
import com.google.firebase.firestore.FirebaseFirestoreSettings;
import com.google.firebase.firestore.QueryDocumentSnapshot;
import com.google.firebase.firestore.QuerySnapshot;

import java.util.HashMap;
import java.util.Objects;

import static android.app.Notification.EXTRA_NOTIFICATION_ID;

public class MapsActivity extends FragmentActivity implements OnMapReadyCallback {

    private static final String ACTION_SNOOZE ="StopService" ;
    public boolean checkUser = false;
    String UserEmailId;
    String UserId;
    String TroubleUserEmailId=" ";
   private HashMap<String, Marker> mMarkers = new HashMap<>();

    private GoogleMap TroubleMap;
    FirebaseFirestore db;

    private static final int PERMISSIONS_REQUEST_ACCESS_FINE_LOCATION = 1;
    long ScholarNumber= 0;
    public MediaPlayer StartingPlayer;
    public MediaPlayer UpdatePlayer;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_maps);
        db = FirebaseFirestore.getInstance();
        FirebaseFirestoreSettings settings = new FirebaseFirestoreSettings.Builder()
                .setTimestampsInSnapshotsEnabled(true)
                .setPersistenceEnabled(true)

                .build();
        db.setFirestoreSettings(settings);


        // Obtain the SupportMapFragment and get notified when the map is ready to be used.
        SupportMapFragment mapFragment = (SupportMapFragment) getSupportFragmentManager()
                .findFragmentById(R.id.map);
        if (mapFragment != null) {
            mapFragment.getMapAsync(this);

        }
        UpdatePlayer = MediaPlayer.create(this, R.raw.beep);
        StartingPlayer = MediaPlayer.create(this, R.raw.locationbeep);


    }

    private void PlayerStart() {
        Runnable r=new Runnable() {
            @Override
            public void run() {
                StartingPlayer.start();
            }
        };
        Thread Player=new Thread(r);
        Player.start();
    }


    @Override
    public void onMapReady(GoogleMap googleMap) {

        TroubleMap = googleMap;
        TroubleMap.setMapType(GoogleMap.MAP_TYPE_NORMAL);
        TroubleMap.setMaxZoomPreference(15);
        TroubleMap.setBuildingsEnabled(true);
        TroubleMap.setIndoorEnabled(true);
        PlayerStart();
        getLocationPermission();

        subscribeToUpdates();



    }

    protected void subscribeToUpdates() {
        if (!checkUser) {
            return;
        }
        Log.e("update", "update");
        CollectionReference UserLocationRef = db.collection("user locations");
        UserLocationRef
                .whereArrayContains("FamilyEmailId", UserEmailId)
                .addSnapshotListener(new EventListener<QuerySnapshot>() {
                    @Override
                    public void onEvent(@Nullable QuerySnapshot value,
                                        @Nullable FirebaseFirestoreException e) {
                        if (e != null) {
                            Log.e("message", "Listen failed.", e);
                            return;

                        }

                        if (value != null) {
                            for (DocumentChange dc : value.getDocumentChanges()) {
                                switch (dc.getType()) {
                                    case ADDED:
                                        HashMap<String, Object> data = (HashMap<String, Object>) (dc.getDocument()).getData();
                                        if (data.get("UserScholarNo")!=null)
                                        ScholarNumber=Long.parseLong(Objects.requireNonNull(data.get("UserScholarNo")).toString());
                                        makePosition(dc.getDocument());

                                        Log.e("changes", "New maps: " + dc.getDocument().getData());
                                        break;
                                    case MODIFIED:

                                        makePosition(dc.getDocument());
                                        Log.e("Maps changes", "Modified maps: " + dc.getDocument().getData());
                                        break;
                                    case REMOVED:
                                        Log.e("changes", "Removed city: " + dc.getDocument().getData());
                                        break;
                                }
                            }


                        }


                    }


                });
    }

    private void makePosition(QueryDocumentSnapshot document) {
        String key = document.getId();
        HashMap<String, Object> data = (HashMap<String, Object>) document.getData();
        TroubleUserEmailId= Objects.requireNonNull(data.get("UserEmail")).toString();
        double lat = Double.parseDouble(Objects.requireNonNull(data.get("latitude")).toString());
        double lng = Double.parseDouble(Objects.requireNonNull(data.get("longitude")).toString());


        LatLng location = new LatLng(lat, lng);


       if (!mMarkers.containsKey(key)) {
            mMarkers.put(key, TroubleMap.addMarker(new MarkerOptions().title(key).position(location)));


        } else {
            Objects.requireNonNull(mMarkers.get(key)).setPosition(location);
            UpdatePlayer.start();
        }
Toast.makeText(getApplicationContext(),ScholarNumber+" "+"is in trouble !Help her!",Toast.LENGTH_SHORT).show();
       DisplayNotification(TroubleUserEmailId);
    /*  LatLngBounds.Builder builder = new LatLngBounds.Builder();
        for (Marker marker : mMarkers.values()) {
            builder.include(marker.getPosition());
        }
        TroubleMap.animateCamera(CameraUpdateFactory.newLatLngBounds(builder.build(),1));*/



    }


    private void getLocationPermission() {

        if (ContextCompat.checkSelfPermission(this.getApplicationContext(),
                android.Manifest.permission.ACCESS_FINE_LOCATION)
                == PackageManager.PERMISSION_GRANTED) {
            TroubleMap.setMyLocationEnabled(true);
            TroubleMap.getUiSettings().setMyLocationButtonEnabled(true);
        } else {
            ActivityCompat.requestPermissions(this,
                    new String[]{android.Manifest.permission.ACCESS_FINE_LOCATION},
                    PERMISSIONS_REQUEST_ACCESS_FINE_LOCATION);
        }
    }


    @Override
    public void onRequestPermissionsResult(int requestCode,
                                           @NonNull String permissions[],
                                           @NonNull int[] grantResults) {

        switch (requestCode) {
            case PERMISSIONS_REQUEST_ACCESS_FINE_LOCATION: {

                if (grantResults.length > 0
                        && grantResults[0] == PackageManager.PERMISSION_GRANTED) {
                    if (ActivityCompat.checkSelfPermission(this, Manifest.permission.ACCESS_FINE_LOCATION) != PackageManager.PERMISSION_GRANTED && ActivityCompat.checkSelfPermission(this, Manifest.permission.ACCESS_COARSE_LOCATION) != PackageManager.PERMISSION_GRANTED) {

                        return;
                    }
                    TroubleMap.setMyLocationEnabled(true);
                    TroubleMap.getUiSettings().setMyLocationButtonEnabled(true);
                }
            }
        }

    }

    protected void userDetails(){
        FirebaseUser user = FirebaseAuth.getInstance().getCurrentUser();
        if (user != null) {


                    UserEmailId = user.getEmail();
                UserId = user.getUid();

                checkUser=true;}
                else
            checkUser=false;
    }

    @Override
    protected void onStart() {


        super.onStart();
        userDetails();
    }
   protected void DisplayNotification(String Email){
       Intent snoozeIntent = new Intent(this, Receiver.class);
            snoozeIntent.setAction(ACTION_SNOOZE);

       PendingIntent snoozePendingIntent =
               PendingIntent.getBroadcast(this, 0, snoozeIntent, 0);

       NotificationCompat.Builder mBuilder = new NotificationCompat.Builder(this, "ub")
               .setSmallIcon(R.drawable.ic_stat_face)
               .setContentTitle("ALERT")
               .setContentText(Email+"  "+"IS IN TROUBLE !HELP HER!")
               .setPriority(NotificationCompat.PRIORITY_DEFAULT)
               .setStyle(new NotificationCompat.BigTextStyle()
                       .bigText(Email+"  "+"IS IN TROUBLE !HELP HER!"))

               .addAction(0,"STOP UPDATES",snoozePendingIntent);


       NotificationManagerCompat notificationManager = NotificationManagerCompat.from(this);


       notificationManager.notify(3107, mBuilder.build());


   }





}



