#include "Clicky.h"

// int pCount = 0; 
int pRight = 1; 
int pWrong = 0; 
int pState = pRight; 

Clicky pClick;

void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT); 
  pinMode(8, OUTPUT);  
  pinMode(2, INPUT); 
  Serial.begin(9600); 
  pClick.setup(4);
}

void loop() {
//put your main code here, to run repeatedly:
    bool i0 = pClick.wasClicked();
    int i1 = digitalRead(2); 
    int i2 = analogRead(A6); 
    int i3 = digitalRead(3); 

  if(pState == pRight) {
  if (i0==1) {
    pState = pRight; 
  } else {
    pState = pWrong; 
  }
}

if(pState == pRight) {
  if (i1==1) {
    pState = pRight; 
  } else {
    pState = pWrong; 
  }
}

if(pState == pRight) {
  if (i2==1) {
    pState = pRight; 
  } else {
    pState = pWrong; 
  }
}

if(pState == pRight) {
  if (i3==1) {
    pState = pRight; 
  } else {
    pState = pWrong; 
  }
}

if (pState == pRight) {
  digitalWrite(7, HIGH); 
} else {
  digitalWrite (8, HIGH); 
}

Serial.println(String(pState));
delay(100); 
}




