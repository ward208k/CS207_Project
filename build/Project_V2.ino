/*
*IR remote test for project V2.1
*Kaden Ward - 200373058
*March 29th, 2017
*
*This program will check what button is pushed on an infrared remote
*and, if the button is valid, light up the corrosponding led for 1 sec
*
*Based on the example sketch IRecvDemo, by SparkFun. 
*/

#include <IRremote.h>

//Var init
int IRPin = 5;
int upPin=12;
int rightPin=11;
int leftPin=10;
int downPin=9;

int leftTime = 0;
int rightTime = 0;
int upTime = 0;
int downTime = 0;

//For the IR system
IRrecv irrecv(IRPin);

decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn();  // Start the receiver
  pinMode(upPin, OUTPUT);
  pinMode(leftPin, OUTPUT);
  pinMode(rightPin, OUTPUT);
  pinMode(downPin, OUTPUT);
}

void loop() {
  if (irrecv.decode(&results)) {
    //Serial.println(results.value);

    if (results.value == 1086198509){
      //If up pushed... change state and set time
      Serial.println("2 - UP");
      upTime=750;
    }

    if (results.value == 1086231149){
      Serial.println("6 - RIGHT");
      rightTime=750;
    }

    if (results.value == 1086222989){
      Serial.println("4 - LEFT");
      leftTime=750;
    }

    if (results.value == 1086239309){
      Serial.println("8 - DOWN");
      downTime=750;
    }
    
  irrecv.resume(); // Receive the next value
  }
  
  delay(1);

  if (upTime>0){
    upTime--;
    digitalWrite(upPin, HIGH);
  }else{
    digitalWrite(upPin, LOW);
  }

    if (rightTime>0){
    rightTime--;
    digitalWrite(rightPin, HIGH);
  }else{
    digitalWrite(rightPin, LOW);
  }

    if (leftTime>0){
    leftTime--;
    digitalWrite(leftPin, HIGH);
  }else{
    digitalWrite(leftPin, LOW);
  }

    if (downTime>0){
    downTime--;
    digitalWrite(downPin, HIGH);
  }else{
    digitalWrite(downPin, LOW);
  }
}
