#include <TM1637.h>

#include <DHT.h>
#include <DHT_U.h>
int CLK = 2;
int DIO = 3;

TM1637 tm1637(2, 3);
TM1637 tm(CLK, DIO);

#define DHTPIN A0
#define DHTTYPE DHT11 

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  tm1637.init();
  tm1637.setBrightness(6);
  dht.begin();
  
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  float hum = dht.readHumidity();
 
  if (isnan(hum )) {
  Serial.println("Error: Failed to read hum");
  return;
  }
  Serial.print(hum);
  Serial.println();
 
  tm1637.display(hum);
  }
