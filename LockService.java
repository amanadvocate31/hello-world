package aman.com.ub1;
//service class for registering broadcast

import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.Service;
import android.content.BroadcastReceiver;

import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;

//import android.os.Binder;
import android.os.Build;
import android.os.IBinder;
import android.support.v4.app.NotificationCompat;

import java.util.Objects;

public class LockService extends Service{
    public  Notification notification;

    @Override
    public void onCreate() {
        super.onCreate();
       if(Build.VERSION.SDK_INT>=26) {
          String Channel_id = "UB";
           NotificationChannel channel = new NotificationChannel(Channel_id, "SAFE MODE IS ON   ", NotificationManager.IMPORTANCE_LOW);

           NotificationManager notificationManager = (NotificationManager)getSystemService(Context.NOTIFICATION_SERVICE);
           if (notificationManager != null) {
               notificationManager.createNotificationChannel(channel);

           notification = new Notification.Builder(this, Channel_id)
                  .setContentTitle("ALERT!")


                  .setSmallIcon(  0)

                   .setContentText("This app is running in background to ensure safety to you").build()

                  ;


           startForeground(1, notification) ;

       }}




    }

    @Override
    public int onStartCommand(Intent intent, int flags, int startId) {

        final IntentFilter filter=new IntentFilter(Intent.ACTION_SCREEN_OFF);
        filter.addAction(Intent.ACTION_SCREEN_ON);
        filter.addAction(Intent.ACTION_USER_PRESENT);

        final BroadcastReceiver Br = new Receiver();
        this.registerReceiver(Br,filter);

        return super.onStartCommand(intent, flags, startId);
    }



    @Override
    public IBinder onBind(Intent intent) {
        return null;
    }

}


