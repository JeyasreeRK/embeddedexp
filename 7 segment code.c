COMMON ANODE


#include <At89s52.h>
#define sev P0
void main(){
  sev=0xF8;
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
