package aman.com.ub1;
//class for editing and storing contacts

import android.content.Context;


import android.content.SharedPreferences;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class HOME_APP extends AppCompatActivity {


    EditText con_1;
    EditText con_2;
    EditText con_3;
    Button displaybutton;
    Button savebutton;

    public static String contact1;
    public static String contact2;
    public static String contact3;



    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        setContentView(R.layout.activity_home_app);

           con_1 = findViewById(R.id.con_1);
           con_2 = findViewById(R.id.con_2);
           con_3 = findViewById(R.id.con_3);
           displaybutton = findViewById(R.id.displaybutton);
           savebutton = findViewById(R.id.savebutton);

           displaybutton.setEnabled(true);
           savebutton.setEnabled(true);



    }




    public void save_click(View view){


        SharedPreferences sharedPreferences=getSharedPreferences("userinfo", Context.MODE_PRIVATE);
        SharedPreferences.Editor editor = sharedPreferences.edit();
        editor.putString("contact1",con_1.getText().toString());
        editor.putString("contact2",con_2.getText().toString());
        editor.putString("contact3",con_3.getText().toString());
        editor.apply();



                if(!check_contact()){

                    displaybutton.setEnabled(false);

                }
                else
                {
                    displaybutton.setEnabled(true);
                    Toast.makeText(this,"Saved!",Toast.LENGTH_SHORT).show();
                    Toast.makeText(this, "Now you can use power button in emergency", Toast.LENGTH_SHORT).show();


                }

    }
    public void display_click(View view)
    {
        if(check_contact()) {
            Toast.makeText(this,contact1+"\n"+contact2+"\n"+contact3,Toast.LENGTH_LONG).show();
        }




    }
    public boolean check_contact()
    {
        SharedPreferences sharedPreferences=getSharedPreferences("userinfo", Context.MODE_PRIVATE);
        contact1=sharedPreferences.getString("contact1","");
        contact2=sharedPreferences.getString("contact2","");
        contact3=sharedPreferences.getString("contact3","");
        if(contact1==null || contact1.length()==0 ||contact2==null || contact2.length()==0  || contact3.length()==0  )
        {
            Toast.makeText(this,"save valid phone number first!",Toast.LENGTH_LONG).show();
            return  false;
        }
        else
        {
            return true;
        }

    }
}


