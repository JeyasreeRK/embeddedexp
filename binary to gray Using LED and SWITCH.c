#include <At89s52.h>
#define G2 P0_7
#define G1 P0_6
#define G0 P0_5
#define B2 P0_2
#define B1 P0_1
#define B0 P0_0
void main(){
__bit S2,S1,S0;
G2=1;
G1=1;
G0=1;
 while(1){
   S2=!G2;
   S1=!G1;
   S0=!G0;
   B2=!S2;
   B1=!(S2^S1);
   B0=!((S2^S1)^S0);
  }
  }
 
