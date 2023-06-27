#include <At89s52.h>
#define LED1 P2_4
#define LED2 P2_3
#define ON 0
#define OFF 1
void time(int);
void main(){
LED1=OFF;
LED2=OFF;
  while(1)
 {
 LED1=ON;
 LED2=OFF;
 time(1);
 LED1=OFF;
 LED2=ON;
 time(1);
  }
}

void time(int del)
{
int c1,c2;
for(c1=0;c1<del;c1++)
{
for(c2=0;c2<15;c2++)
{
}
}
}
