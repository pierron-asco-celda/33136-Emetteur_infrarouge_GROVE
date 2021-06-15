/*
    ** Envoie information IR module Grove **
       PIN D7 Module shield GROVE
       Moniteur série -> Baud rate 9600.
       mySender.send(SONY, 0xa8bca, 20); // nom de l'objet, 
       code de l'action, n-bits de l'action : (SONY,0xa8bca, 20)
       -> appareil Sony, BP on, 20 bits. --> #include <IRLib_P02_Sony.h>
*/

#include <IRLibSendBase.h>
#include <IRLib_P02_Sony.h>
#include <IRLibCombo.h>

#define IR_SEND_PWM_PIN D7

IRsend mySender;

void setup() {
  Serial.begin(9600);
  Serial.println(F("Presser une touche pour envoyer l'action puis 'entrer'. "));
  delay(2000); while (!Serial);
}

void loop() {
  if (Serial.read() != -1) {
    mySender.send(SONY, 0xa8bca, 20);
    Serial.println(F("OK"));
  }
}
