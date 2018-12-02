package com.example.feixiaku.opengles3native;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        System.loadLibrary("helloJNI");

        TextView textView = findViewById(R.id.textId);

        textView.setText(printLog());

    }


    public static native String printLog();
}
