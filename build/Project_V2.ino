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
const int up =    1086198509     // change this to your remote's 'UP' value
const int right = 1086231149     // change this to your remote's 'RIGHT' value
const int left =  1086222989     // change this to your remote's 'LEFT' value
const int down =  1086239309     // change this to your remote's 'DOWN' value

const int IRPin = 5;
const int upPin=12;
const int rightPin=11;
const int leftPin=10;
const int downPin=9;

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
  irrecv.enableIRIn();    // Start the receiver
  pinMode(upPin, OUTPUT);
  pinMode(leftPin, OUTPUT);
  pinMode(rightPin, OUTPUT);
  pinMode(downPin, OUTPUT);
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value);

    if (results.value == up ){
      //If up pushed... change state and set time
      Serial.println("2 - UP");
      upTime=650;
    }

    if (results.value == right ){
      //If right pushed... change state and set time
      Serial.println("6 - RIGHT");
      rightTime=650;
    }

    if (results.value == left ){
      //If left pushed... change state and set time
      Serial.println("4 - LEFT");
      leftTime=650;
    }

    if (results.value == down ){
      //If down pushed... change state and set time
      Serial.println("8 - DOWN");
      downTime=650;
    }
    
  irrecv.resume();   // Receive the next IR value
  }
  
  delay(1);

  if (upTime>0){    //While counter is live, power valve and extend piston.
    upTime--;
    digitalWrite(upPin, HIGH);
  }else{            //While counter is dead, close valve and retract piston.
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
