// humidity and temperature is printing in serial mointor
#include<DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht( DHTPIN,DHTTYPE);
  void setup()
{
  Serial.begin(9600);
  dht.begin();
}
void loop()
{
  float h=dht.readhumidity();
 float t=dht.readtemperature();
serial.print("humidity:");
serial.print(h);
serial.print("temperature:");
serial.print(t);
serial.print("'c");
delay(3000);
}
