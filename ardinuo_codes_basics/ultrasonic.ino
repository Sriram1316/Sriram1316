// distance is measured by sensor
#include<stdio.h>
const int triggerpin=6;
const int echopipn=7;
void setup()
{
  Serial.begin(9600);
  prinmode(triggerpin,output);
  pinmode(echopin,input);
  
}
void loop()
{
  digitalwrite(triggerpip,low);
delay(1000);
digitalwrite(triggerpin,high);
delay(1000);
digitalwrite(triggerpin,low);
 long duration =pulsein(echopin,high);
    float distance=duration*0.034/2;
 Serial.print("distance:");
serial.print(distance);
serial.print("cm");
delay(2000);
}
