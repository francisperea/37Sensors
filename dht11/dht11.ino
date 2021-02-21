#include <dht_nonblocking.h>

#define DHT_SENSOR_TYPE DHT_TYPE_11

static const int DHT_SENSOR_PIN = 2;
DHT_nonblocking dht_sensor(DHT_SENSOR_PIN, DHT_SENSOR_TYPE);

void setup( )
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin( 9600);
}

void flash(){
  for (int i=0;i<2;i++){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(50);
    digitalWrite(LED_BUILTIN, LOW);
    delay(50); 
    digitalWrite(LED_BUILTIN, HIGH);
    delay(50);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000); 
  }
}

void loop( )
{
  float temperature;
  float humidity;

  if(dht_sensor.measure(&temperature,&humidity))
  {
    Serial.print("T = ");
    Serial.print(temperature,1);
    Serial.print("ºC, H = ");
    //Serial.print(" ");
    Serial.print(humidity,1);
    Serial.println( "%" );
    flash();
  }
}