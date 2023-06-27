#include <At89s52.h>
#define sev P0
const char c[11]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void time(int);
void main(){
  char i;
 while(1){
  for(i=0;i<10;i++){
   sev=c[i];
   time(5);
  }
  
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
