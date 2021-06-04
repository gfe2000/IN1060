const int piezo = 2;
const int knapp1 = 9;
const int knapp2 = 10;
const int knapp3 = 11;
const int knapp4 = 12;
const int LED1 = 3;
const int LED2 = 4;
const int LED3 = 5;
const int LED4 = 6;
const int gronn = 7;
const int rod = 8;


int knapp1state = LOW;
int knapp2state = LOW;
int knapp3state = LOW;
int knapp4state = LOW;

int reading1;
int reading2;
int reading3;
int reading4;

int tidligereRead1 = HIGH;
int tidligereRead2 = HIGH;
int tidligereRead3 = HIGH;
int tidligereRead4 = HIGH;

long tid1 = 0;
long tid2 = 0;
long tid3 = 0;
long tid4 = 0;

long avvis1 = 200;
long avvis2 = 200;
long avvis3 = 200;
long avvis4 = 200;

void setup()
{
  pinMode(knapp1, INPUT);
  pinMode(knapp2, INPUT);
  pinMode(knapp3, INPUT);
  pinMode(knapp4, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(gronn, OUTPUT);
  pinMode(rod, OUTPUT);
}

void loop()
{
  reading1 = digitalRead(knapp1);
  reading2 = digitalRead(knapp2);
  reading3 = digitalRead(knapp3);
  reading4 = digitalRead(knapp4);
  
  if (reading1 == HIGH && tidligereRead1 == LOW && millis() - tid1 > avvis1) {
    if (knapp1state == HIGH){
     knapp1state = LOW;
     }
   else{
    tone(piezo,440);
    delay(250);
    noTone(piezo);
    digitalWrite(gronn, HIGH);
    delay(300);
    digitalWrite(gronn, LOW);
    knapp1state = HIGH;
    tid1 = millis();
   }
  }

   if (reading2 == HIGH && tidligereRead2 == LOW && millis() - tid2 > avvis2) {
    if (knapp2state == HIGH){
     knapp2state = LOW;
     }
   else{
    tone(piezo,440);
    delay(250);
    noTone(piezo);
    digitalWrite(gronn, HIGH);
    delay(300);
    digitalWrite(gronn, LOW);
    knapp2state = HIGH;
    tid2 = millis();
   }
  }
  
  if (reading3 == HIGH && tidligereRead3 == LOW && millis() - tid3 > avvis3) {
    if (knapp3state == HIGH){
     knapp3state = LOW;
     }
   else{
    tone(piezo,440);
    delay(250);
    noTone(piezo);
    digitalWrite(gronn, HIGH);
    delay(300);
    digitalWrite(gronn, LOW);
    knapp3state = HIGH;
    tid3 = millis();
   }
  }

  if (reading4 == HIGH && tidligereRead4 == LOW && millis() - tid4 > avvis4) {
    if (knapp4state == HIGH){
     knapp4state = LOW;
     }
   else{
    tone(piezo,440);
    delay(250);
    noTone(piezo);
    digitalWrite(gronn, HIGH);
    delay(300);
    digitalWrite(gronn, LOW);
    knapp4state = HIGH;
   }
   tid4 = millis();
  }

  if (knapp1state == HIGH && knapp2state == HIGH && knapp3state == HIGH && knapp4state == HIGH) {
    tone(piezo, 260);
    delay(250);
    tone(piezo,330);
    delay(250);
    tone(piezo, 390);
    delay(250);
    noTone(piezo);
    
    digitalWrite(rod, HIGH);
    digitalWrite(gronn, LOW);
    delay(250);
    digitalWrite(rod, LOW);
    digitalWrite(gronn, HIGH);
    delay(250);
    digitalWrite(rod, HIGH);
    digitalWrite(gronn, LOW);
    delay(250);
    digitalWrite(rod, LOW);
    digitalWrite(gronn, HIGH);
    delay(250);
    digitalWrite(rod, HIGH);
    digitalWrite(gronn, LOW);
    delay(250);
    digitalWrite(rod, LOW);
    digitalWrite(gronn, HIGH);
    delay(250);
    digitalWrite(rod, HIGH);
    digitalWrite(gronn, LOW);
    delay(250);
    digitalWrite(rod, HIGH);
    digitalWrite(gronn, HIGH);
    delay(250); 
  }
  
  digitalWrite(LED3, knapp1state);
  digitalWrite(LED4, knapp2state);
  digitalWrite(LED5, knapp3state);
  digitalWrite(LED6, knapp4state);
  digitalWrite(LED7, knapp5state);
  tidligereRead1 = reading1;
  tidligereRead2 = reading2;
  tidligereRead3 = reading3;
  tidligereRead4 = reading4;
  tidligereRead5 = reading5;
}
