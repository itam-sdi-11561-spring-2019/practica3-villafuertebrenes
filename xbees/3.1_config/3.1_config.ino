#include <SoftwareSerial.h>
void setup() {
  SoftwareSerial xbee_serial(10)
  xbeeserial.begin(9600) ;
}

void loop() {
  Serial.print('H');
  delay(1000);
  Serial.print('L');
  delay(1000);

}
