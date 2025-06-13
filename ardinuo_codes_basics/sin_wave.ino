int i=0;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  float y= 220*sin((pi/180)*i);
  Serial.println(y);
  i++;
}


