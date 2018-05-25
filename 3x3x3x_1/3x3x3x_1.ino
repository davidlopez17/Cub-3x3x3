void setup() {                
  // initialize the digital pin as an output.
  pinMode(1, OUTPUT); 
  pinMode(2, OUTPUT); 
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(7, OUTPUT); 
  pinMode(8, OUTPUT); 
  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT);  // Nivell 1
  pinMode(11, OUTPUT); // Nivell 2
  pinMode(12, OUTPUT); // Nivell 3

} 

void loop() {

  digitalWrite(12, HIGH);
  digitalWrite(9, HIGH);
  delay(100);

  digitalWrite(12, HIGH);
  digitalWrite(9, LOW);


  digitalWrite(8, HIGH);
  delay(100);

  digitalWrite(12, HIGH);
  digitalWrite(8, LOW);


  digitalWrite(7, HIGH);
  delay(100);

  digitalWrite(12, HIGH);
  digitalWrite(7, LOW);


  digitalWrite(6, HIGH);
   delay(100);

  digitalWrite(12, HIGH);
  digitalWrite(6, LOW);


  digitalWrite(5, HIGH);
   delay(100);

  digitalWrite(12, HIGH);
  digitalWrite(5, LOW);


  digitalWrite(4, HIGH);
   delay(100);

  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);


  digitalWrite(3, HIGH);
   delay(100);

  digitalWrite(12, HIGH);
  digitalWrite(3, LOW);


  digitalWrite(2, HIGH);
   delay(100);

  digitalWrite(12, HIGH);
  digitalWrite(2, LOW);


  digitalWrite(1, HIGH);
   delay(100);

  digitalWrite(12, HIGH);
  digitalWrite(1, LOW); //fins aquí fa la fila 12


  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  delay(100);

  digitalWrite(11, HIGH);
  digitalWrite(9, LOW);


  digitalWrite(8, HIGH);
  delay(100);

  digitalWrite(11, HIGH);
  digitalWrite(8, LOW);


  digitalWrite(7, HIGH);
  delay(100);

  digitalWrite(11, HIGH);
  digitalWrite(7, LOW);


  digitalWrite(6, HIGH);
   delay(100);

  digitalWrite(11, HIGH);
  digitalWrite(6, LOW);


  digitalWrite(5, HIGH);
   delay(100);

  digitalWrite(11, HIGH);
  digitalWrite(5, LOW);


  digitalWrite(4, HIGH);
   delay(100);

  digitalWrite(11, HIGH);
  digitalWrite(4, LOW);


  digitalWrite(3, HIGH);
   delay(100);

  digitalWrite(11, HIGH);
  digitalWrite(3, LOW);


  digitalWrite(2, HIGH);
   delay(100);

  digitalWrite(11, HIGH);
  digitalWrite(2, LOW);


  digitalWrite(1, HIGH);
   delay(100);

  digitalWrite(11, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(11, LOW);//fins aquí fa la fila 11

  
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  delay(100);

  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);


  digitalWrite(8, HIGH);
  delay(100);

  digitalWrite(10, HIGH);
  digitalWrite(8, LOW);


  digitalWrite(7, HIGH);
  delay(100);

  digitalWrite(10, HIGH);
  digitalWrite(7, LOW);


  digitalWrite(6, HIGH);
   delay(100);

  digitalWrite(10, HIGH);
  digitalWrite(6, LOW);


  digitalWrite(5, HIGH);
   delay(100);

  digitalWrite(10, HIGH);
  digitalWrite(5, LOW);


  digitalWrite(4, HIGH);
   delay(100);

  digitalWrite(10, HIGH);
  digitalWrite(4, LOW);


  digitalWrite(3, HIGH);
   delay(100);

  digitalWrite(10, HIGH);
  digitalWrite(3, LOW);


  digitalWrite(2, HIGH);
   delay(100);

  digitalWrite(10, HIGH);
  digitalWrite(2, LOW);


  digitalWrite(1, HIGH);
   delay(100);

  
  digitalWrite(1, LOW);
  digitalWrite(10, LOW);//fins aquí fa la fila 10

}
  
  
