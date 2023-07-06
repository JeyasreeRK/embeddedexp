#include <At89s52.h>
#define sev P0
#define dig P1
#define b 0xFF
const char c[11]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
const char d[5]={0x0E,0x0D,0x0B,0x07};
void time(int);
void main(){


while(1)
{
sev=c[2];
dig=d[3];
dig=b;
sev=c[0];
dig=d[2];
dig=b;
sev=c[2];
dig=d[1];
dig=b;
sev=c[3];
dig=d[0];
dig=b;
break;
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
