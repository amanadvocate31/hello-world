package aman.com.ub1;
//class for email id
import android.content.DialogInterface;

import android.support.annotation.NonNull;
import android.support.v7.app.AlertDialog;
import android.Manifest;
import android.content.Context;
import android.content.pm.PackageManager;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Build;
import android.support.v4.app.ActivityCompat;
import android.support.v4.content.ContextCompat;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;
import android.widget.Toast;
import static android.accounts.AccountManager.KEY_ACCOUNT_NAME;
import static android.accounts.AccountManager.newChooseAccountIntent;

public class Registration extends AppCompatActivity {
    TextView Email;
    public String email = null;
    public String saved_email;
    static final int PICK_CONTACT_REQUEST = 1;

    public Intent start;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_registration);
        Email = findViewById(R.id.email_id);
        if (android.os.Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            start = newChooseAccountIntent(null, null, new String[]{"com.google"}, "Please select one google account ", null, null,
                    null);
            if (checkPermission()) {
                startActivityForResult(start, PICK_CONTACT_REQUEST);
                Toast.makeText(this, "cancel if you had already added", Toast.LENGTH_SHORT).show();
            }
        } else {
            start = newChooseAccountIntent(null, null, new String[]{"com.google"}, false, "Please select one google account",
                    null, null, null);

            startActivityForResult(start, PICK_CONTACT_REQUEST);
        }

    }

    public void setEmail() {
        SharedPreferences sharedPreferences = getSharedPreferences("email", Context.MODE_PRIVATE);
        saved_email = sharedPreferences.getString("Email_id", "");
        if (email == null && saved_email.length() == 0) {
            saved_email = "Account not available";
        }
        Email.setText(saved_email);
        Toast.makeText(this, "TEST YOUR APP FOR FAKE NUMBER", Toast.LENGTH_SHORT).show();
    }

    public void Email_change() {
        SharedPreferences sharedPreferences = getSharedPreferences("email", Context.MODE_PRIVATE);
        SharedPreferences.Editor editor = sharedPreferences.edit();

        if (email == null) {
            email = "Account not available";
        }
        Email.setText(email);
        editor.putString("Email_id", email);


        editor.apply();

    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {

        if (requestCode == PICK_CONTACT_REQUEST) {

            if (resultCode == RESULT_OK) {
                Bundle emailbundle = data.getExtras();
                if (emailbundle != null) {
                    email = emailbundle.getString(KEY_ACCOUNT_NAME);
                }
                Email_change();

            } else if (resultCode == RESULT_CANCELED) {
                setEmail();


            }

        }


    }

    public boolean checkPermission() {
        if (ContextCompat.checkSelfPermission(this,
                Manifest.permission.GET_ACCOUNTS)
                != PackageManager.PERMISSION_GRANTED) {


            if (ActivityCompat.shouldShowRequestPermissionRationale(this,
                    Manifest.permission.GET_ACCOUNTS)) {


                new AlertDialog.Builder(this)
                        .setTitle("Email permission")
                        .setMessage("permission is needed")
                        .setPositiveButton("OK", new DialogInterface.OnClickListener() {
                            @Override
                            public void onClick(DialogInterface dialogInterface, int i) {

                                ActivityCompat.requestPermissions(Registration.this,
                                        new String[]{Manifest.permission.GET_ACCOUNTS},
                                        PICK_CONTACT_REQUEST);
                            }
                        })
                        .setNegativeButton("CANCEL", new DialogInterface.OnClickListener() {
                            @Override
                            public void onClick(DialogInterface dialog, int which) {
                                Toast.makeText(getApplicationContext(), "sorry! we can not proceed", Toast.LENGTH_LONG).show();
                            }
                        })
                        .create()
                        .show();


            } else {

                ActivityCompat.requestPermissions(this,
                        new String[]{Manifest.permission.GET_ACCOUNTS}, PICK_CONTACT_REQUEST
                );
            }
            return false;
        } else {
            return true;
        }
    }

    @Override
    public void onRequestPermissionsResult(int requestCode,
                                           @NonNull String permissions[], @NonNull int[] grantResults) {
        switch (requestCode) {
            case PICK_CONTACT_REQUEST: {

                if (grantResults.length > 0
                        && grantResults[0] == PackageManager.PERMISSION_GRANTED) {


                    if (ContextCompat.checkSelfPermission(this,
                            Manifest.permission.GET_ACCOUNTS)
                            == PackageManager.PERMISSION_GRANTED) {

                        startActivityForResult(start, PICK_CONTACT_REQUEST);

                    }

                }


            }
            break;

        }
    }
    public void test_click(View view){


            Intent i=new Intent(this,Emergency.class) ;
            i.putExtra("Test_Intent","test");
            startActivity(i);

    }
}