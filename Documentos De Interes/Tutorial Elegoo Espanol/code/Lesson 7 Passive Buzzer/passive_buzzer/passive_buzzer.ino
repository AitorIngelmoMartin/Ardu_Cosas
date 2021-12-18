//www.elegoo.com
//2016.12.08

#include "pitches.h"
 
// notes in the melody:
int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};

//  DO       RE       MI       FA       SOL       LA      SI       DO
int cancion[] = {
  NOTE_D3, NOTE_D3, NOTE_D5, NOTE_A1, NOTE_G1, NOTE_F3, NOTE_D3, NOTE_F3,NOTE_G5,

  NOTE_C3, NOTE_C3, NOTE_D5, NOTE_A3, NOTE_G1, NOTE_F3, NOTE_D3, NOTE_F3,NOTE_G5,

  NOTE_B3, NOTE_B3, NOTE_D5, NOTE_A3, NOTE_G1, NOTE_F3, NOTE_D3, NOTE_F3,NOTE_G5,

  NOTE_A1, NOTE_A1, NOTE_D5, NOTE_A3, NOTE_G1, NOTE_F3, NOTE_D3, NOTE_F3,NOTE_G5,  
  };
int duration = 100;  // 500 miliseconds
void setup() {
 
}
 
void loop() {  
  for (int thisNote = 0; thisNote < 36; thisNote++) {
    // pin8 output the voice, every scale is 0.5 sencond
    tone(8, cancion[thisNote], duration);
     
    // Retrardo entre notas
    delay(200);
  }
}
