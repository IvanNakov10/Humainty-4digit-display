#include <TM1637.h>

#include <DHT.h>
#include <DHT_U.h>

int CLK = 2;
int DIA = 3;

#define DHTTYPE DHT11;
#define DHTPIN A0;

TM1637 tm1637(CLK, DIA);
TM1637 tm(2, 3);

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
