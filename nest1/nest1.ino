
 void setup() {
  // put your setup code here ,
  pinMode(3, OUTPUT);
}

void loop() {
  //put your main code here, to run repeatedly:
   digitalWrite(3, HIGH);  //turn the LED on (HIGH is the voltage level)
   delay(5000);
   digitalWrite(3, LOW);
   delay(2000);
}  
   

