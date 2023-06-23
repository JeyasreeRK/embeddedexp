#include <At89s52.h>
#define LED1 P1
#define SW P0


void main(){
char i;
SW=0xFF;

  while(1)
 {
  i=SW;
  LED1=i;
  
}
}
