package aman.com.ub1;
//this class for reverse Geocoder
import android.app.IntentService;
import android.content.Intent;
import android.location.Address;
import android.location.Geocoder;
import android.location.Location;
import android.os.Bundle;
import android.os.ResultReceiver;
import android.text.TextUtils;
import android.util.Log;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;

import static android.content.ContentValues.TAG;


public class FetchAddressIntentService extends IntentService {
    Geocoder geocoder;
    protected ResultReceiver mReceiver;
    public double latitude;
    public double longitude;
public String link;

   public List<Address> addresses = null;
  public  String errorMessage = "";
    public FetchAddressIntentService() {
        super("FetchAddressIntentService");
    }


    @Override
    protected void onHandleIntent(Intent intent) {
        geocoder=new Geocoder(getApplicationContext(), Locale.getDefault());
        if (intent == null) {
            return;
        }

mReceiver= intent.getParcelableExtra(Constant.RECEIVER);

        Location location = intent.getParcelableExtra(
                Constant.LOCATION_DATA_EXTRA);
if(location!=null) {
    latitude=location.getLatitude();
    longitude= location.getLongitude();
    link = "http://maps.google.com/?q="+ latitude+","+longitude;


    if (Geocoder.isPresent()) {
        try {

            addresses = geocoder.getFromLocation(
                    latitude,
                    longitude,

                    1);
        } catch (IOException ioException) {

            errorMessage ="I am here:"+"  "+ link;
            Log.e(TAG, errorMessage, ioException);
        } catch (IllegalArgumentException illegalArgumentException) {

            errorMessage ="I am here:"+"  "+ link;

        }
    } else
        Log.e("geocoder", "not available");

}
        if (addresses == null || addresses.size()  == 0) {
            if (errorMessage.isEmpty()) {
                errorMessage = "I am here:"+"  "+link;
                Log.e(TAG, errorMessage);
            }
            deliverResultToReceiver(Constant.FAILURE_RESULT, errorMessage);
        } else {
            Address address = addresses.get(0);
            ArrayList<String> addressFragments = new ArrayList<>();


            for(int i = 0; i <= address.getMaxAddressLineIndex(); i++) {
                addressFragments.add(address.getAddressLine(i));
            }

            deliverResultToReceiver(Constant.SUCCESS_RESULT,
                    "I am here:"+"  "+TextUtils.join(System.getProperty("line.separator"),
                            addressFragments)+"\n"+link);
        }

    }
    private void deliverResultToReceiver(int resultCode, String message) {
        Bundle bundle = new Bundle();
        bundle.putString(Constant.RESULT_DATA_KEY, message);
        mReceiver.send(resultCode, bundle);
    }
}