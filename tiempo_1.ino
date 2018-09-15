void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
   pinMode(12, OUTPUT);
   pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  
  digitalWrite(13, HIGH); 
  digitalWrite(12, HIGH);  
  digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)111111
  delay(1000);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(13, HIGH); 
  digitalWrite(12, HIGH);  
  digitalWrite(11, LOW);   // turn the LED on (HIGH is the voltage level)222222
  delay(1000);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(13, HIGH); 
  digitalWrite(12, LOW);  
  digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)3333
  delay(1000);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(13, HIGH); 
  digitalWrite(12, LOW);  
  digitalWrite(11, LOW);   // turn the LED on (HIGH is the voltage level)444
  delay(1000);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(13, LOW); 
  digitalWrite(12, HIGH);  
  digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)5555
  delay(1000);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(13, LOW); 
  digitalWrite(12, HIGH);  
  digitalWrite(11, LOW);   // turn the LED on (HIGH is the voltage level)6666
  delay(1000);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(13, LOW); 
  digitalWrite(12, LOW);  
  digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)7777
  delay(1000);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(13, LOW); 
  digitalWrite(12, LOW);  
  digitalWrite(11,LOW);   // turn the LED on (HIGH is the voltage level)8888
  delay(1000);  // turn the LED on (HIGH is the voltage level)
 
}
