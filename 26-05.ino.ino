const int knapp1 = 2;
const int knapp2 = 3;
const int knapp3 = 4;
const int knapp4 = 5;
const int knapp5 = 6;
const int knapp6 = 7;
const int LED1 = 8;
const int LED2 = 9;
const int LED3 = 10;
const int LED4 = 11;
const int LED5 = 12;
const int LED6 = 13;

int knapp1state = LOW;
int knapp2state = LOW;
int knapp3state = LOW;
int knapp4state = LOW;
int knapp5state = LOW;
int knapp6state = LOW;

int reading1;
int reading2;
int reading3;
int reading4;
int reading5;
int reading6;

int tidligereRead1 = HIGH;
int tidligereRead2 = HIGH;
int tidligereRead3 = HIGH;
int tidligereRead4 = HIGH;
int tidligereRead5 = HIGH;
int tidligereRead6 = HIGH;

long tid1 = 0;
long tid2 = 0;
long tid3 = 0;
long tid4 = 0;
long tid5 = 0;
long tid6 = 0;
long avvis1 = 200;
long avvis2 = 200;
long avvis3 = 200;
long avvis4 = 200;
long avvis5 = 200;
long avvis6 = 200;

void setup()
{
  pinMode(knapp1, INPUT);
  pinMode(knapp2, INPUT);
  pinMode(knapp3, INPUT);
  pinMode(knapp4, INPUT);
  pinMode(knapp5, INPUT);
  pinMode(knapp6, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
}

void loop()
{
  reading1 = digitalRead(knapp1);
  reading2 = digitalRead(knapp2);
  reading3 = digitalRead(knapp3);
  reading4 = digitalRead(knapp4);
  reading5 = digitalRead(knapp5);
  reading6 = digitalRead(knapp6);
  
  if (reading1 == HIGH && tidligereRead1 == LOW && millis() - tid1 > avvis1) {
    if (knapp1state == HIGH){
     knapp1state = LOW;
     }
   else{
    knapp1state = HIGH;
    tid1 = millis();
   }
  }

   if (reading2 == HIGH && tidligereRead2 == LOW && millis() - tid2 > avvis2) {
    if (knapp2state == HIGH){
     knapp2state = LOW;
     }
   else{
    knapp2state = HIGH;
    tid2 = millis();
   }
  }
  
  if (reading3 == HIGH && tidligereRead3 == LOW && millis() - tid3 > avvis3) {
    if (knapp3state == HIGH){
     knapp3state = LOW;
     }
   else{
    knapp3state = HIGH;
    tid3 = millis();
   }
  }
  
  if (reading4 == HIGH && tidligereRead4 == LOW && millis() - tid4 > avvis4) {
    if (knapp4state == HIGH){
     knapp4state = LOW;
     }
   else{
    knapp4state = HIGH;
    tid4 = millis();
   }
  }

  if (reading5 == HIGH && tidligereRead5 == LOW && millis() - tid5 > avvis5) {
    if (knapp5state == HIGH){
     knapp5state = LOW;
     }
   else{
    knapp5state = HIGH;
    tid5 = millis();
   }
  }

  if (reading6 == HIGH && tidligereRead6 == LOW && millis() - tid6 > avvis6) {
    if (knapp6state == HIGH){
     knapp6state = LOW;
     }
   else{
    knapp6state = HIGH;
   }
   tid6 = millis();
  }

 

  digitalWrite(LED1, knapp1state);
  digitalWrite(LED2, knapp2state);
  digitalWrite(LED3, knapp3state);
  digitalWrite(LED4, knapp4state);
  digitalWrite(LED5, knapp5state);
  digitalWrite(LED6, knapp6state);
  tidligereRead1 = reading1;
  tidligereRead2 = reading2;
  tidligereRead3 = reading3;
  tidligereRead4 = reading4;
  tidligereRead5 = reading5;
  tidligereRead6 = reading6; 
}
