// here displaying in lcd device
#include<wire.h>
#include<LiqiudCrystal_I2C.h>

  liquidcrystal(0*27,16,2);
int lm35pin=A0;
void setup()
{
  lcd.begin();
 lcd.backlight();
lcd.setcursor(0,0);
lcd.print("temp sensor data");
delay(2000);
lcd.clear();
}
void loop()
{
  int sensor_value=analagread(lm35pin);
 float voltage=sensor_value*(5/1023);
 float temp_c=volatge*100;
lcd.setcursor(0,0);
lcd.print("temp:");
lcd.print(temp_c);
lcd.print("c");
delay(2000);
}
