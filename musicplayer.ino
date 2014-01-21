    #define tone_C0 1911 //
    #define tone_Cf0 1804 //
    #define tone_D0 1695 //
    #define tone_Eb0 1604 //
    #define tone_E0 1513 // 
    #define tone_F0 1431 // 
    #define tone_Ff0 1349 //
    #define tone_G0 1267 // 
    #define tone_Ab0 1194 //
    #define tone_A0 1130 //
    #define tone_Bb0 1066 //
    #define tone_B0 1002 // 
    #define tone_C1 947 // 
    #define tone_Cf1 898 //
    #define tone_D1 847 //
    #define tone_Eb1 799 //
    #define tone_E1 753 // 
    #define tone_F1 710 // 
    #define tone_Ff1 670 //
    #define tone_G1 632 // 
    #define tone_Ab1 596 //
    #define tone_A1 561 // 
    #define tone_Bb1 529 //  
    #define tone_B1 499 // 
    
    #define tone_C2 470 //
    #define tone_Cf2 444 //
    #define tone_D2 419 //
    #define tone_Eb2 395 //
    #define tone_E2 370 //
    #define tone_F2 348 //
    #define tone_Ff2 328 //
    #define tone_G2 309 //
    #define tone_Ab2 291 //
    #define tone_A2 275 // 
    #define tone_Bb2 259 //
    #define tone_B2 244 //
    #define tone_C3 136 //
    #define tone_Cf3 128 //
    #define tone_D3 120 //
    #define tone_Eb3 130 //
    #define tone_E3 107 //
    #define tone_F3 101 //
    #define tone_Ff3 95 //
    #define tone_G3 90 //
    #define tone_Ab3 85 //
    #define tone_A3 80 //
    #define tone_Bb3 76 //  
    #define tone_B3 72 //
    
    #define tone_C4 68 //
    #define tone_Cf4 64 //
    #define tone_D4 61 //
    #define tone_Eb4 57 //
    #define tone_E4 54 //
    #define tone_F4 51 //
    #define tone_Ff4 48 //

#define tone_p 0 

#include <TinkerKit.h>

//sta
TKButton but(I0);
TKPotentiometer pot(I1);
TKJoystick joy(I2,I3);

int speakerOutLow  = 9;
    
int DEBUG = 1;

void setup() { 
  pinMode(speakerOutHigh, OUTPUT);
  pinMode(speakerOutLow, OUTPUT);
  if (DEBUG) { 
    Serial.begin(9600);
  }
  Serial.print("Hallo world!!!");
}

// verschillende liedjes lijsten
int underwater[] = {
  tone_D0,4, tone_E0,4, tone_Ff0,4, tone_G0,4, tone_A0,4, tone_Ab0,4, tone_B0,2, tone_B0,2, tone_B0,4, tone_B0,4, tone_B0,8, tone_G0,4, tone_E1,12, tone_Eb1, 12, tone_E1,12, tone_p, 2, tone_G0, 2, tone_A0,2, tone_B0,2, tone_C1,2, tone_D1, 2, tone_E1,12,tone_Eb1,8,tone_F1,4,tone_E1,12,tone_p,10,tone_G0,2,tone_D1,12,tone_Cf1,12,tone_D1,12,tone_p,2,tone_G0, 2, tone_A0,2, tone_B0,2, tone_C1,2,tone_Cf1,2,tone_D1,12,tone_G0,8,tone_F1,4,tone_E1,12,tone_p,10,tone_G0,2,tone_G1,12,tone_G1,12,tone_G1,12,tone_G1,4,tone_A1,4,tone_p,2,tone_G1,2,tone_F1,12,tone_F1,12,tone_F1,12,tone_F1,4,tone_G1,4,tone_p,2,tone_F1,2,tone_E1,8,tone_p,4,tone_A0,4,tone_B0,3,tone_F1,4,tone_E1,2,tone_E1,2,tone_E1,6,tone_B0,2,tone_C1,12 };
int March[] = {
  tone_G1,4,tone_G1,4,tone_G1,4,tone_Eb1,3,tone_Bb1,1,tone_G1,4,tone_Eb1,3,tone_Bb1,1,tone_G1,8,tone_D2,4,tone_D2,4,tone_D2,4,tone_Eb2,3,tone_Bb1,1,tone_Ff1,4,tone_Eb1,3,tone_Bb1,1,tone_G1,8,tone_G2,4,tone_G1,3,tone_G1,1,tone_G2,4,tone_Ff2,3,tone_F2,1,tone_Eb2,1,tone_D2,1,tone_Eb2,2,tone_p,2,tone_Ab1,2,tone_Cf2,4,tone_C2,3,tone_B1,1,tone_Bb1,1,tone_A1,1,tone_Bb1,2,tone_p,2,tone_Eb1,2,tone_Ff1,4,tone_Eb1,3,tone_Ff1,1,tone_Bb1,4,tone_G1,3,tone_Bb1,1,tone_D2,8,tone_G2,4,tone_G1,3,tone_G1,1,tone_G2,4,tone_Ff2,3,tone_F2,1,tone_E2,1,tone_Eb2,1,tone_E2,2,tone_p,2,tone_Ab1,2,tone_D2,4,tone_C2,3,tone_B1,1,tone_Bb1,1,tone_A1,1,tone_Bb1,2,tone_p,2,tone_Eb1,2,tone_Ff1,4,tone_Eb1,3,tone_Bb1,1,tone_G1,4,tone_Eb1,3,tone_Bb1,1,tone_G1,8};
int pirates[] ={
  tone_B0,4,tone_B0,2,tone_B0,2,tone_B0,2,tone_B0,2,tone_B0,4,tone_B0,4,tone_A0,4,tone_B0,4,tone_B0,2,tone_B0,2,tone_B0,2,tone_B0,2,tone_B0,4,tone_B0,4,tone_A0,4,tone_E1,4,tone_Ff1,4,tone_G1,4,tone_A1,4,tone_G1,4,tone_Ff1,4,tone_G1,4,tone_A1,4,tone_B1,4,tone_A1,8,tone_Ff1,2,tone_D1,2,tone_E1,2,tone_E1,2,tone_E1,4,tone_D1,4, tone_B0,2,tone_B0,2,tone_B0,4,tone_E1,2,tone_Ff1,2,tone_G1,4,tone_Ff1,4,tone_G1,4,tone_A1,4,tone_G1,4,tone_A1,4,tone_B1,4,tone_A1,4,tone_G1,4,tone_E1,8,tone_E1,2,tone_Ff1,2,tone_G1,4,tone_A1,4,tone_B1,4,tone_C2,4,tone_E1,4,tone_C2,4,tone_G1,4,tone_A1,4,tone_Ff1,4,tone_E1,8,tone_G1,2,tone_Ff1,2,tone_E1,8,tone_p,16};
int tell[] = {
  tone_G0,2,tone_G0,2,tone_G0,4,tone_G0,2,tone_G0,2,tone_G0,4,tone_G0,2,tone_G0,2,tone_C1,4,tone_D1,4,tone_E1,4,tone_G0,2,tone_G0,2,tone_G0,4,tone_G0,2,tone_G0,2,tone_C1,4,tone_E1,4,tone_D1,4,tone_B0,4,tone_G0,4,tone_G0,2,tone_G0,2,tone_G0,4,tone_G0,2,tone_G0,2,tone_G0,4,tone_G0,2,tone_G0,2,tone_C1,4,tone_D1,4,tone_E1,4,tone_C1,2,tone_E1,2,tone_G1,10,tone_F1,2,tone_E1,2,tone_D1,2,tone_C1,4,tone_E1,4,tone_C1,4};
int starman[] = {
  tone_C1,4,tone_C1,4,tone_C1,4,tone_D0,2,tone_C1,2,tone_p,2,tone_C1,4,tone_D0,2,tone_C1,2,tone_D0,2,tone_C1,4,tone_B0,4,tone_B0,4,tone_B0,4,tone_C0,2,tone_B0,2,tone_p,2,tone_B0,4,tone_C0,2,tone_B0,2,tone_C0,2,tone_B0,4,tone_C1,4,tone_C1,4,tone_C1,4,tone_D0,2,tone_C1,2,tone_p,2,tone_C1,4,tone_D0,2,tone_C1,2,tone_D0,2,tone_C1,4,tone_B0,4,tone_B0,4,tone_B0,4,tone_C0,2,tone_B0,2,tone_p,2,tone_B0,4,tone_C0,2,tone_B0,2,tone_C0,2,tone_B0,4,tone_C1,4,tone_C1,4,tone_C1,4,tone_D0,2,tone_C1,2,tone_p,2,tone_C1,4,tone_D0,2,tone_C1,2,tone_D0,2,tone_C1,4,tone_B0,4,tone_B0,4,tone_B0,4,tone_C0,2,tone_B0,2,tone_p,2,tone_B0,4,tone_C0,2,tone_B0,2,tone_C0,2,tone_B0,4};
int Bond[] = {
  tone_B0,8,tone_C1,8,tone_Cf1,8,tone_C1,8,tone_B0,8,tone_C1,8,tone_Cf1,8,tone_C1,8,tone_E1,2,tone_Ff1,1,tone_Ff1,1,tone_Ff1,2,tone_Ff1,4,tone_E1,2,tone_E1,2,tone_E1,2,tone_E1,2,tone_G1,1,tone_G1,1,tone_G1,2,tone_G1,4,tone_Ff1,2,tone_Ff1,2,tone_Ff1,2,tone_E1,2,tone_Ff1,1,tone_Ff1,1,tone_Ff1,2,tone_Ff1,4,tone_E1,2,tone_E1,2,tone_E1,2,tone_E1,2,tone_G1,1,tone_G1,1,tone_G1,2,tone_G1,4,tone_Ff1,2,tone_Ff1,2,tone_Ff1,2,tone_E1,2,tone_Ff1,1,tone_Ff1,1,tone_Ff1,2,tone_Ff1,4,tone_E1,2,tone_E1,2,tone_E1,2,tone_E1,2,tone_G1,1,tone_G1,1,tone_G1,2,tone_G1,4,tone_Ff1,2,tone_Ff1,2,tone_E1,2,tone_Eb2,2,tone_D2,10,tone_B1,2,tone_A1,2,tone_B1,16,tone_B0,8,tone_C1,8,tone_Cf1,8,tone_C1,8,tone_B0,8,tone_C1,8,tone_Cf1,8,tone_C1,8,tone_E1,2,tone_G1,5,tone_Eb2,2,tone_D2,5,tone_G1,2,tone_Bb1,2,tone_B1,14,tone_G1,5,tone_A1,1,tone_Ff1,6,tone_B0,2,tone_E1,2,tone_Cf1,16};

//aantal liedjes
int song_number = 6;
//init aatal noten in een liedje 
int MAX_COUNT = 1;

//init tempo
long tempo = 10000;
//init lengte van een rust
int pause = 100;
int rest_count = 10; 
//init start liedje
int song = 6;

// init de tone variabelen
int tone_ = 0;
int beat = 0;
long duration  = 0;

// loopje om tonen mee af te spelen
void playTone(int speakerOut) {
  //debug output
    Serial.print(joy.readY());
    Serial.println(joy.readX());
    //actual algorithm
  long elapsed_time = 0;
  if (tone_ > 0) { 
    while (elapsed_time < duration) {

      digitalWrite(speakerOut,HIGH);
      delayMicroseconds(tone_+joy.readX()-584);


      digitalWrite(speakerOut, LOW);
      delayMicroseconds(tone_+joy.readY()-588);


      elapsed_time += (tone_);
    } 
  }
  else { 

    delayMicroseconds(duration);  

  }                                 
}

//functie om van liedje te wisselen
void klik(){
    if (song<song_number){
      song++; 
    }
    else {
      song=1;
    }
    Serial.print(song);
}

//
void loop() {
  //debug output
  Serial.println(" hoi\r\n");

//switch case om het liedje te kiezen en te doorlopen
  switch (song)
  {    
  
  case 1: 
    {
        Serial.println(" l1");
      MAX_COUNT = sizeof(underwater) / 2;
      for(int i=0; i<MAX_COUNT; i++) {
        tone_ = underwater[i];
        i++;
        beat = underwater[i]*2;
        tempo = 500+pot.read(); //500*15+1;
        duration = (beat * tempo*20)+200;

        playTone(speakerOutLow);
        if(but.pressed()){
         klik(); 
         break;
        }
        delay((tempo+1)/100);
      }
      break;
    }
  case 2: 
    {
      MAX_COUNT = sizeof(March) / 2;
      for(int i=0; i<MAX_COUNT; i++) {
        tone_ = March[i]*1.2;
        i++;
        beat = March[i]*2;
        tempo = 500+pot.read(); //500*17+1;
        duration = (beat * tempo*20)+200;

        playTone(speakerOutLow);
         if(but.pressed()){
         klik(); 
         break;
        }
        delay((tempo+1)/100);
      }
      break;
    }
  case 3: 
    {
       MAX_COUNT = sizeof(pirates) / 2;
      for(int i=0; i<MAX_COUNT; i++) {
        tone_ = pirates[i];
        i++;
        beat = pirates[i]*2;
        tempo = 500+pot.read();//500*12+1;
        duration = (beat * tempo*20)+200;

        playTone(speakerOutLow); 
        if(but.pressed()){
         klik(); 
         break;
        }
        delay((tempo+1)/100);
      }
      break;
    }
  case 4: 
    {
      MAX_COUNT = sizeof(tell) / 2;
      for(int i=0; i<MAX_COUNT; i++) {
        tone_ = tell[i];
        i++;
        beat = tell[i]*2;
        tempo = 500+pot.read();//500*6+1;
        duration = (beat * tempo*20)+200;

        playTone(speakerOutLow);
        if(but.pressed()){
         klik(); 
         break;
        }
        delay((tempo+1)/100);
      }
      break;
    }
    
  case 5: 
          Serial.println(" l2");
    {
      MAX_COUNT = sizeof(starman) / 2;
      for(int i=0; i<MAX_COUNT; i++) {
        tone_ = starman[i]*0.8;
        i++;
        beat = starman[i]*2;
        tempo = 500+pot.read();//500*8+1;
        duration = (beat * tempo*20)+200;

        playTone(speakerOutLow);
        if(but.pressed()){
         klik(); 
         break;
        }
        delay((tempo+1)/100);
      }
      break;
    } 
    
   case 6: 
    {
          Serial.println(" l1");
    
      MAX_COUNT = sizeof(Bond) / 2;
      for(int i=0; i<MAX_COUNT; i++) {
        tone_ = Bond[i];
        i++;
        beat = Bond[i]*2;
        tempo = 500+pot.read();//500*17+1;
        duration = (beat * tempo*20)+200;

        playTone(speakerOutLow);
        if(but.pressed()){
         klik(); 
         break;
        }
        delay((tempo+1)/100);
      }
      break;
    }
}
}


