/*
This is V1.0 of the Dance Dance Robot project.
Created by Kaden Ward, Feb 15, 2017.

This version simply lights up an LED when you press a button.
This simulates the simple input/output that will be used 
throughout the rest of the project.
*/

void setup() {
//Input pins.  You plug your button pins in to these
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A4,INPUT);

//Output pins.  You plug your LEDs into these pins.
pinMode(8,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(13,OUTPUT);

//Strictly for debugging
//Serial.begin(9600);
}

void loop() {
//If button0 is pressed...
if (analogRead(A0) >= 1022){
  //Light up LED0
  digitalWrite(8,HIGH);
//If not...
}else{
  //Turn off LED0
  digitalWrite(8,LOW);
}

//If button1 is pressed...
if (analogRead(A1) >= 1022){
  digitalWrite(10,HIGH);
  Serial.println(analogRead(A1));
}else{
  digitalWrite(10,LOW);
}
//If button2 is pressed...
if (analogRead(A2) >= 1022){
  digitalWrite(11,HIGH);
  Serial.println(analogRead(A2));
}else{
  digitalWrite(11,LOW);
}

//If button3 is pressed...
if (analogRead(A4) >= 1022){
  digitalWrite(13,HIGH);
  Serial.println(analogRead(A4));
}else{
  digitalWrite(13,LOW);
}

//Strictly for debugging
//Serial.print(", ");
//Serial.print(digitalRead(3));
//Serial.print(", ");
//Serial.print(digitalRead(5));
//Serial.print(", ");
//Serial.println(digitalRead(7));
//delay(50);

}

