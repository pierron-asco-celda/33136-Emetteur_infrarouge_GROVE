# 33136-Emetteur infrarouge GROVE

Emetteur infrarouge GROVE [33136](https://www.pierron.fr/interface-arduino-uno-5973.html)

<div style="text-align: justify">Module basé sur un émetteur infrarouge compatible Grove. Il peut être utilisé pour transmettre des données ou des commandes à distance jusqu'à 10 mètres. Ce module se raccorde sur une sortie du Base Shield via un câble 4 conducteur.</div>
<br>

Caractéristiques techniques :
- Alimentation : 3.3 V
- Longueur d’onde : 940 nm
- Portée : 10 m
- Température de service : -40 à +80 °C

![L-33136](/img/L-33136.jpg)

# Installation des fichiers dans IDE Arduino:
<div style="text-align: justify">Créer un nouveau répertoire nommé "Pierron..." dans le dossier "libraries" de votre dossier Arduino.
Y placer tous les fichiers.</div>
Ou
<div style="text-align: justify">télécharger le dépôt en ZIP et dans l'IDE Arduino : Croquis / inclure bibliothèque / ajouter la bibliothèque ZIP.</div>

<div style="text-align: justify">Pour utiliser la librairie dans votre propre projet, importez-la avec  Sketch > Import Library.</div>

# Usage :
Pour l’utilisation de ce module, référez-vous aux indications présentes sur le circuit imprimé GROVE.

# Schémas :

![SCH-33136](/img/SCH-33136.jpg)
![BRD-33136](/img/BRD-33136.jpg)

# RESSOURCES À TÉLÉCHARGER :

Ressource utilisation : [tsal6200](https://github.com/pierron-asco-celda/33162-Capteur_Couleur_GROVE/blob/main/src/Datasheet_TCS3472.pdf)

# Exemple :
### Arduino / C++
```cpp
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
```
## À propos :
<br>
PIERRON ASCO-CELDA (https://www.pierron.fr).