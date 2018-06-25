package aman.com.ub1;
//Receiver class for receiving screen broadcast

import android.app.Service;
import android.content.BroadcastReceiver;

import android.content.Context;
import android.content.Intent;

import android.os.Build;
import android.telephony.TelephonyManager;
import android.util.Log;

import java.util.Objects;


public class Receiver extends BroadcastReceiver{
    private static int countPowerOff=0;
public double time ;
    public Receiver(){}



    @Override
    public void onReceive(Context context, Intent intent) {

        TelephonyManager telephonyManager=(TelephonyManager) context.getSystemService(Service.TELEPHONY_SERVICE);

       if(countPowerOff==0)
        time= System.currentTimeMillis();
        Log.e("LOB","onReceive"+time);
        switch (Objects.requireNonNull(intent.getAction())){
            case Intent.ACTION_SCREEN_OFF:
                Log.e("Screen","shutdown now"+countPowerOff);

                    if(countPowerOff>=1 && (System.currentTimeMillis()-time)<=3000 && Objects.requireNonNull(telephonyManager).getCallState()==TelephonyManager.CALL_STATE_IDLE )
                    {
                        countPowerOff=0;
                        Intent i = new Intent(context,Emergency.class);
                        i.addFlags(Intent.FLAG_INCLUDE_STOPPED_PACKAGES);
                        i.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
                        i.putExtra("Test_Intent","screen");
                        context.startActivity(i);
                        }
                        else {
                        countPowerOff ++;
                    }

                break;
            case Intent.ACTION_SCREEN_ON:
                if( (System.currentTimeMillis()-time)>2000 )
                    countPowerOff=0;
                Log.e("Screen","awaked now"+countPowerOff);


                break;




            case Intent. ACTION_USER_PRESENT:
                if( (System.currentTimeMillis()-time)>2000 )
                    countPowerOff=0;

                Log.e("LOB","user present"+countPowerOff);


                break;
            case Intent.ACTION_BOOT_COMPLETED :
                Log.e("LOB","system get rebooted");
                Intent i = new Intent(context, LockService.class);

                if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {

                   context.startForegroundService(i);

                } else {
                   context .startService(i);

                }

                 break;

        }

    }
}
