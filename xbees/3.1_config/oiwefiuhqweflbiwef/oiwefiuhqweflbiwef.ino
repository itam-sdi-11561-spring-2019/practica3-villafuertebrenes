#include <SoftwareSerial.h>

SoftwareSerial xbeeSerial(10, 11); // RX, TX

void setup() {
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, INPUT);
  // Open serial communications and wait for port to open:
  xbeeSerial.begin(9600);
  // set the data rate for the SoftwareSerial port
}

void loop() { // run over and over
  delay(500);
  char var = xbeeSerial.read();
  if(digitalRead(4)){
    xbeeSerial.println("Nada impresiona a Gary");
  }
  if(var=='1'){
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
  }
  else if(var=='2'){
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(5, LOW);
  }
  else if(var=='3'){
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
  }
  else if(var=='4'){
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
  }
  else{
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
  }
  
}
