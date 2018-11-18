#include "binaryLED.h"

BinaryLED::BinaryLED(int pin0, int pin1, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7){

        _ledPin[0] = pin0;
        _ledPin[1] = pin1;
        _ledPin[2] = pin2;
        _ledPin[3] = pin3;
        _ledPin[4] = pin4;
        _ledPin[5] = pin5;
        _ledPin[6] = pin6;
        _ledPin[7] = pin7;

 }

 void BinaryLED::begin(){

      for(int i=0; i<8; i++){
    
        pinMode(_ledPin[i], OUTPUT);
      }
   
 }

void BinaryLED::upCount(){

    for(int counter = 0; counter < 256; counter ++){
    
      for (int i=0; i<8; i++){
          if(bitRead(counter, i) == 1){
              
              digitalWrite(_ledPin[i], HIGH);
            }else{
              
              digitalWrite(_ledPin[i], LOW); 
          }
        }

        delay(500);
    }

 }

 void BinaryLED::downCount(){

      for(int counter = 255; counter >= 0; counter --){
    
        for (int i=0; i<8; i++){
  
            if(bitRead(counter, i) == 1){
                
                digitalWrite(_ledPin[i], HIGH);
              }else{
                
                digitalWrite(_ledPin[i], LOW); 
            }
          }

        delay(500);
      }
    
   }  
    
 void BinaryLED::shiftLeft(){
    for(int i=0; i<8; i++){

        if( i == 0){
          
          digitalWrite(_ledPin[i], HIGH);
          delay(60);
        }
        else{
          digitalWrite(_ledPin[i], HIGH);
          delay(60);
          digitalWrite(_ledPin[i-1], LOW);  
          delay(60);
         }
      
     }

     allOf();
 }

 void BinaryLED::shiftRight(){

    for(int i=7; i >= 0; i--){

        if( i == 7){
          
          digitalWrite(_ledPin[i], HIGH);
          delay(60);
        }else{
            
          digitalWrite(_ledPin[i], HIGH);
          delay(60);
          digitalWrite(_ledPin[i+1], LOW);  
          delay(60);
         }
      
     }
     allOf();
    
 }

 void BinaryLED::allOf(){

  for(int i=0; i < 8; i++){
    
    digitalWrite(_ledPin[i], LOW);  
  }
   
 }
