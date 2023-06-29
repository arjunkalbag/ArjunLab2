/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/student/Desktop/IoT/ArjunLab2/src/ArjunLab2.ino"
void setup();
void loop();
#line 1 "/Users/student/Desktop/IoT/ArjunLab2/src/ArjunLab2.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
uint16_t value; 

void setup()
{
    Serial.begin(9600);
    pinMode(D0, OUTPUT);
    pinMode(D1, OUTPUT);
    pinMode(D3, OUTPUT);
    pinMode(D5, OUTPUT);
    pinMode(D7, OUTPUT);
    pinMode(D8, OUTPUT);

}

void loop()
{
    value = analogRead(A5);  
    Serial.println(value);   

    digitalWrite(D0, HIGH);
    digitalWrite(D1, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D7, LOW);
    digitalWrite(D8, LOW);

    value = analogRead(A5); 
    delay(value);
    digitalWrite(D0, LOW);
    digitalWrite(D1, HIGH);
    digitalWrite(D3, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D7, LOW);
    digitalWrite(D8, LOW);

    value = analogRead(A5); 
    delay(value);
    digitalWrite(D0, LOW);
    digitalWrite(D1, LOW);
    digitalWrite(D3, HIGH);
    digitalWrite(D5, LOW);
    digitalWrite(D7, LOW);
    digitalWrite(D8, LOW);

    value = analogRead(A5); 
    delay(value);
    digitalWrite(D0, LOW);
    digitalWrite(D1, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D5, HIGH);
    digitalWrite(D7, LOW);
    digitalWrite(D8, LOW);

    value = analogRead(A5); 
    delay(value);
    digitalWrite(D0, LOW);
    digitalWrite(D1, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D7, HIGH);
    digitalWrite(D8, LOW);

    value = analogRead(A5);
    delay(value);
    digitalWrite(D0, LOW);
    digitalWrite(D1, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D7, LOW);
    digitalWrite(D8, HIGH);

    value = analogRead(A5); 
    delay(value);
    digitalWrite(D0, LOW);
    digitalWrite(D1, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D7, HIGH);
    digitalWrite(D8, LOW);

    value = analogRead(A5); 
    delay(value);
    digitalWrite(D0, LOW);
    digitalWrite(D1, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D5, HIGH);
    digitalWrite(D7, LOW);
    digitalWrite(D8, LOW);

    value = analogRead(A5); 
    delay(value);
    digitalWrite(D0, LOW);
    digitalWrite(D1, LOW);
    digitalWrite(D3, HIGH);
    digitalWrite(D5, LOW);
    digitalWrite(D7, LOW);
    digitalWrite(D8, LOW);

    value = analogRead(A5); 
    delay(value);
    digitalWrite(D0, LOW);
    digitalWrite(D1, HIGH);
    digitalWrite(D3, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D7, LOW);
    digitalWrite(D8, LOW);

    value = analogRead(A5); 
    delay(value);
    digitalWrite(D0, HIGH);
    digitalWrite(D1, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D7, LOW);
    digitalWrite(D8, LOW);

    value = analogRead(A5); 
    delay(1);
}