#include <At89s52.h>
#define LED1 P1_5
#define SW P0


void main(){
char i;
SW=0x55;

  while(1)
 {
  i=SW;
  LED1=i;

  
  
}

}
