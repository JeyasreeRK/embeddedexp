COMMON ANODE


#include <At89s52.h>
#define sev P0
void main(){
  sev=0xF8;
  while(1){
  }
 }
USING ARRAY
#include <At89s52.h>
#define sev P0
const char c[11]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void main(){
  sev=c[7];
  while(1){
  }
 }
   COMMON CATHODE
#include <At89s52.h>
#define sev P0
void main(){
  sev=~0xF8;
  while(1){
  }
 }
 USING ARRAY
#include <At89s52.h>
#define sev P0
const char c[11]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void main(){
  sev=~c[7];
  while(1){
  }
 }
