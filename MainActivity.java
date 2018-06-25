package aman.com.ub1;
// class for main page and starting the service

import android.content.Context;
import android.content.Intent;

import android.content.SharedPreferences;
import android.os.Build;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    Button Edit_contact;
    Button Regis_button;
    public static String Email;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Edit_contact = findViewById(R.id.Edit_contact);
        Regis_button = findViewById(R.id.REGIS_BUTTON);

        Intent i = new Intent(this, LockService.class);

      if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {

            startForegroundService(i);


        } else {
            startService(i);

        }

        Edit_contact.setOnClickListener(new View.OnClickListener()

        {
            @Override
            public void onClick(View v) {
                Intent j = new Intent(getApplicationContext(), HOME_APP.class);
                SharedPreferences sharedPreferences = getSharedPreferences("email", Context.MODE_PRIVATE);
                Email = sharedPreferences.getString("Email_id", "");
                if ( Email.length() == 0 || Email.equals("Account not available")  ) {
                    Toast.makeText(getApplicationContext(), "please register first !", Toast.LENGTH_LONG).show();
                } else

                {
                    startActivity(j);
                }
            }

        });

        Regis_button.setOnClickListener(new View.OnClickListener()

        {
            @Override
            public void onClick(View v) {
                Intent i = new Intent(getApplicationContext(), Registration.class);
                startActivity(i);
            }
        });


    }

}
