
int MB2 = 9;
int MB1 = 10;
int MA1 = 11;
int MA2 = 12;
char val;

void setup() {
  pinMode(MA1,OUTPUT);
  pinMode(MA2,OUTPUT);
  pinMode(MB1,OUTPUT);
  pinMode(MB2,OUTPUT);
  Serial.begin(9600);

}

void loop() {

  while(Serial.available()>0){
    val=Serial.read();
    Serial.println(val); 
    
    switch (val){

      case 'S':             //Stop
      digitalWrite(MB2,LOW);
      digitalWrite(MB1,LOW);
      digitalWrite(MA1,LOW);
      digitalWrite(MA2,LOW);
      break;

      case 'L':             //Move Left
      digitalWrite(MB2,LOW);
      digitalWrite(MB1,HIGH);
      digitalWrite(MA1,HIGH);
      digitalWrite(MA2,LOW);
      break;
      
      case 'R':             //Move Right
      digitalWrite(MB2,HIGH);
      digitalWrite(MB1,LOW);
      digitalWrite(MA1,LOW);
      digitalWrite(MA2,HIGH);
      break;
      
      case 'F':             //Move Forward
      digitalWrite(MB2,HIGH);
      digitalWrite(MB1,LOW);
      digitalWrite(MA1,HIGH);
      digitalWrite(MA2,LOW);
      break;
      
      case 'B':             //Move Backward
      digitalWrite(MB2,LOW);
      digitalWrite(MB1,);
      digitalWrite(MA1,LOW);
      digitalWrite(MA2,HIGH);
      break;

      }
    }
}
