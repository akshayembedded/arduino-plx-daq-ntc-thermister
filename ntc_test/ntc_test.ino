
#include "temprature.h"

void setup() {
Serial.begin(9600);
Serial.println("CLEARDATA");
Serial.println("LABEL, Date, Time,Temprature T1,Temprature T2,Temprature T3,Temprature T4,Temprature T5,Temprature T6,Average1, Average2");
}

void loop() {float T[6];
Serial.print("DATA,DATE,TIME,");
T[0]=temprature(analogRead(0));
    Serial.print(T[0]);
  Serial.print(",");
  T[1]=temprature(analogRead(1));
  Serial.print(T[1]);
  Serial.print(",");
  T[2]=temprature(analogRead(2));
    Serial.print(T[2]);
  Serial.print(",");
  T[3]=temprature(analogRead(3));
    Serial.print(T[3]);
  Serial.print(",");
    T[4]=temprature(analogRead(4));
    Serial.print(T[4]);
  Serial.print(",");
  T[5]=temprature(analogRead(5));
    Serial.print(T[5]);
  Serial.print(",");
  Serial.print((T[0]+T[1]+T[2])/3);
  Serial.print(",");
   Serial.print((T[3]+T[4]+T[5])/3);
  Serial.println(",");
  delay(500);
}
