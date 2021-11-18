#define velmotor 3
#define m1a 4
#define m1b 5
#define m2a 10
#define m2b 11
#define tmp 3000

int vel=0;

void setup() {
  pinMode(velmotor,OUTPUT);
  pinMode(m1a,OUTPUT);
  pinMode(m1b,OUTPUT);
  pinMode(m2a,OUTPUT);
  pinMode(m2b,OUTPUT);
  digitalWrite(m1a,LOW);
  digitalWrite(m1b,LOW);
  digitalWrite(m2a,LOW);
  digitalWrite(m2b,LOW);
  analogWrite(velmotor, vel);
}

void loop() {
  vel = 255;
  analogWrite(velmotor,vel);
  digitalWrite(m1a,LOW);
  digitalWrite(m1b,HIGH);
  digitalWrite(m2a,LOW);
  digitalWrite(m2b,HIGH);  
  //delay(tmp);
  //digitalWrite(m1a,LOW);
  //digitalWrite(m1b,LOW);
  //digitalWrite(m2a,LOW);
  //digitalWrite(m2b,LOW);
  //delay(100);
  //digitalWrite(m1a,HIGH);
  //digitalWrite(m1b,LOW);
  //digitalWrite(m2a,HIGH);
  //digitalWrite(m2b,LOW);
  //delay(tmp);
}
