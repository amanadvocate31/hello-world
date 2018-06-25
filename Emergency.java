package aman.com.ub1;
//main operating class for all functions of app
import android.Manifest;

import android.app.NotificationManager;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.pm.PackageManager;


import android.media.MediaPlayer;
import android.support.v4.app.ActivityCompat;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.telephony.SmsManager;
import android.util.Log;
import android.widget.Toast;

import android.location.Location;

import android.support.annotation.NonNull;


import java.util.List;
import java.util.Objects;


import pub.devrel.easypermissions.AfterPermissionGranted;
import pub.devrel.easypermissions.AppSettingsDialog;
import pub.devrel.easypermissions.EasyPermissions;

import android.os.Handler;
import android.os.Looper;
import android.os.ResultReceiver;


import com.google.android.gms.location.FusedLocationProviderClient;
import com.google.android.gms.location.LocationCallback;
import com.google.android.gms.location.LocationRequest;
import com.google.android.gms.location.LocationResult;
import com.google.android.gms.location.LocationServices;


public class Emergency extends AppCompatActivity implements EasyPermissions.PermissionCallbacks {
    public String contact1;
    public String contact2;
    public String contact3;
    public String DirectorContact;
    private FusedLocationProviderClient fusedLocationProviderClient;
    private static final int request_code = 31;

    protected Location CurrLocation;
    private AddressResultReceiver mResultReceiver;
    private LocationRequest locationRequest;
    private LocationCallback locationCallback;
    private boolean checkcurrent = true;
    private String mAddressOutput;
    public float start_timing;
    public MediaPlayer mediaPlayer;
public String intent_message;



    @Override
    protected void onCreate(Bundle savedInstanceState) {

        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_emergency);
        Bundle IntentData=getIntent().getExtras();

         mediaPlayer=MediaPlayer.create(this,R.raw.beep);
        if (IntentData != null) {
            intent_message=IntentData.getString("Test_Intent");
        }

        locationRequest = new LocationRequest();
        locationRequest.setInterval(20000);
        locationRequest.setFastestInterval(5000);

        locationRequest.setPriority(LocationRequest.PRIORITY_HIGH_ACCURACY);
        mResultReceiver=new AddressResultReceiver(this,new Handler(Looper.getMainLooper()));

        fusedLocationProviderClient = LocationServices.getFusedLocationProviderClient(this);

        if(checkcurrent){
            start_timing=System.currentTimeMillis();}
        locationCallback = new LocationCallback() {
            @Override
            public void onLocationResult(LocationResult locationResult) {
                super.onLocationResult(locationResult);
                for (Location location : locationResult.getLocations()) {
                    if(location!=null)
                    {  CurrLocation=location;
                        startIntentService();}
                }
            }
        };





    }

    @AfterPermissionGranted(request_code)
    private void get_permission() {
        String[] perms = {Manifest.permission.READ_PHONE_STATE, Manifest.permission.SEND_SMS, Manifest.permission.ACCESS_FINE_LOCATION, Manifest.permission.INTERNET};
        if (EasyPermissions.hasPermissions(this, perms)) {
            if (ActivityCompat.checkSelfPermission(this, Manifest.permission.ACCESS_FINE_LOCATION) != PackageManager.PERMISSION_GRANTED && ActivityCompat.checkSelfPermission(this, Manifest.permission.ACCESS_COARSE_LOCATION) != PackageManager.PERMISSION_GRANTED) {

                return;
            }
            fusedLocationProviderClient.requestLocationUpdates(locationRequest, locationCallback, null);
        } else
            EasyPermissions.requestPermissions(this, "we need permissions ", request_code, perms);
    }

    @Override
    public void onRequestPermissionsResult(int requestCode, @NonNull String[] permissions, @NonNull int[] grantResults) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults);
        EasyPermissions.onRequestPermissionsResult(requestCode, permissions, grantResults, this);
    }

    @Override
    public void onPermissionsGranted(int requestCode, @NonNull List<String> perms) {

    }

    @Override
    public void onPermissionsDenied(int requestCode, @NonNull List<String> perms) {
        Toast.makeText(this, "sorry! again open app", Toast.LENGTH_LONG).show();
        if (EasyPermissions.somePermissionPermanentlyDenied(this, perms)) {
            new AppSettingsDialog.Builder(this).build().show();
        }

    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode == AppSettingsDialog.DEFAULT_SETTINGS_REQ_CODE)
        {       if (ActivityCompat.checkSelfPermission(this, Manifest.permission.ACCESS_FINE_LOCATION) != PackageManager.PERMISSION_GRANTED && ActivityCompat.checkSelfPermission(this, Manifest.permission.ACCESS_COARSE_LOCATION) != PackageManager.PERMISSION_GRANTED) {

            return;
        }
            fusedLocationProviderClient.requestLocationUpdates(locationRequest, locationCallback, null);
        }}


    @Override
    protected void onResume() {
        super.onResume();
Runnable r=new Runnable() {
    @Override
    public void run() {
        SharedPreferences sharedPreferences = getSharedPreferences("userinfo", Context.MODE_PRIVATE);
        contact1=sharedPreferences.getString("contact1","");
        contact2=sharedPreferences.getString("contact2","");
        contact3=sharedPreferences.getString("contact3","");
        DirectorContact="8002872369";
    }
};
Thread contact_fill=new Thread(r);
contact_fill.start();
        startLocationUpdates();


    }

    private void startLocationUpdates() {


        get_permission();

        }



    @Override
    protected void onDestroy() {
        super.onDestroy();
Toast.makeText(this,"HOPE!YOU ARE SAFE!",Toast.LENGTH_SHORT).show();
        stopLocationUpdates();

    }

    private void stopLocationUpdates() {
        if (ActivityCompat.checkSelfPermission(this, Manifest.permission.ACCESS_FINE_LOCATION) == PackageManager.PERMISSION_GRANTED)  {

            fusedLocationProviderClient.removeLocationUpdates(locationCallback);

        }

    }

    class AddressResultReceiver extends ResultReceiver {
         Emergency emergency;
    AddressResultReceiver(Emergency emergency, Handler handler) {
            super(handler);
           this .emergency=emergency;
        }


        @Override
        protected void onReceiveResult(int resultCode, Bundle resultData) {
            super.onReceiveResult(resultCode,resultData);

            if (resultData == null) {
                mAddressOutput = "no address found";

            }
            else{
                mAddressOutput=  resultData.getString(Constant.RESULT_DATA_KEY);
                if (mAddressOutput == null) {
                    mAddressOutput ="no address found" ;

                }


            }



            Log.e("msg","updated");
            if(System.currentTimeMillis()-start_timing >180000|| checkcurrent) {
                if(checkcurrent)
                {

                    mediaPlayer.start();
                    Log.e("music player","Playing");
                    checkcurrent=false;}
                sendMessage();
                start_timing=System.currentTimeMillis();

            }
            else
            {
                Toast.makeText(getApplicationContext(),"BE CALM! AND BE BRAVE",Toast.LENGTH_LONG).show();
            }
        }


    }

        private   void sendMessage() {

            String textMessage = "I AM IN BIG TROUBLE ! HELP ME!";
            SmsManager smsManager=SmsManager.getDefault();


                        switch (intent_message) {
                            case "test":
                                smsManager.sendTextMessage("+918002872369", null, textMessage + "\n" + mAddressOutput, null, null);
                                Log.e("message", "sendingtest");
                                Toast.makeText(getApplicationContext(),"Send!",Toast.LENGTH_SHORT).show();
                                break;
                           case "screen":
                                if ( contact1.length() == 0  || contact2.length() == 0  || contact3.length() == 0) {
                                   Toast.makeText(getApplicationContext(),"first save your contacts",Toast.LENGTH_LONG).show();
                                   stopLocationUpdates();
                                  finish();
                                }
                            else{
                                smsManager.sendTextMessage(contact1, null, textMessage + "\n" + mAddressOutput, null, null);
                                smsManager.sendTextMessage(contact2, null, textMessage + "\n" + mAddressOutput, null, null);
                                smsManager.sendTextMessage(contact3, null, textMessage + "\n" + mAddressOutput, null, null);
                                smsManager.sendTextMessage(DirectorContact, null, textMessage + "\n" + mAddressOutput, null, null);
                                Log.e("message", "sendingscreen");
                                    Toast.makeText(getApplicationContext(),"Send!",Toast.LENGTH_SHORT).show();
                                }
                                break;
                            default:
                                Log.e("default", "no sending");

                        }


        }


    protected void startIntentService() {
        Intent intent = new Intent(this, FetchAddressIntentService.class);
        intent.putExtra(Constant.RECEIVER, mResultReceiver);
        intent.putExtra(Constant.LOCATION_DATA_EXTRA, CurrLocation);
        startService(intent);


    }





}
