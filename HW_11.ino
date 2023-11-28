#include "Clicky.h"

// int pCount = 0; 
//int pRight = 1; 
//int pWrong = 0; 
int pNum = 0; 

Clicky pClick;

void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT); 
  pinMode(8, OUTPUT);  
  pinMode(2, INPUT);
  pinMode(3, INPUT); 
  Serial.begin(9600); 
  pClick.setup(4);
}

void loop() {
//put your main code here, to run repeatedly:
    bool i0 = pClick.wasClicked();
    int i1 = digitalRead(2); 
    int i2 = analogRead(A6); 
    int i3 = digitalRead(3); 

    if (pNum == 0) {
      if (i0 == 1) {
        pNum++; 
      }
    }

  else if(pNum == 1) {
    if(i0 == 1) {
      if(i1 == 1 && i2 < 1000 && i3 == 0) {
        pNum++; 
      }
      else {
        pNum == 100; 
      }
    }
  }

  else if(pNum == 2) {
    if(i0 == 1) {
      if(i1 == 1 && i2 > 1000 && i3 == 0) {
        pNum++; 
      }
      else {
        pNum == 100; 
      }
    }
  }

  else if(pNum == 3) {
    if(i0 == 1) {
      if(i1 == 1 && i2 > 1000 && i3 == 1) {
        pNum++; 
      }
      else {
        pNum == 100; 
      }
    }
  }

if (pNum == 4) {
digitalWrite(7, HIGH); 
delay(500); 
digitalWrite(7, LOW); 
pNum = 0; 
} 
else if(pNum == 100) {
  digitalWrite(8, HIGH); 
  delay(500); 
  digitalWrite(8, LOW); 
  pNum = 0; 
}
Serial.println(String(pNum) + " " + i0 + " " + i1 + " " + i2 + " " + i3);
delay(5); 
}




