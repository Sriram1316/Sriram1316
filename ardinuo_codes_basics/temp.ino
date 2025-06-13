//simple connect to uno print in serial mointor
#define Lm35pin A0
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  float_sensor_value=analogread(Lm35pin);
  float voltage=sensor_value*(5/1023); convert A TO D
 float temp_c= voltage*100; convert T
//now in ferherint heat
float temp_f= (temp_c*(9/5))+32;
 Serial.print("temperature:");
 Serial.print(temp_c);
Serial.print("'c");
 Serial.print("&");
Serial.print(temp_f);
Serial.print("f");
  delay(2000);
}
