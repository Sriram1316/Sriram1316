//here words are scorlls on the lcd
#include<LiquidCrystal.h>
 liquidcrystal(12,11,5,4,6,7);
void setup()
{
  
  lcd.begin(16,2);

}
void loop()
{
  for(int i=0;i<16;i++)
{
   lcd.setcursor(i,1);
 lcd.print("scroll me");
delay(1000);
lcd.clear();
}
}
