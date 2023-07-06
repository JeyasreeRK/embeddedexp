#include <At89s52.h>
#define sev P0
#define dis P1
const char c[11]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void time(int);
void main(){
sev=c[2];
dis=0x07;
time(4);
sev=c[0];
dis=0x0B;
time(4);
sev=c[2];
dis=0x0D;
time(4);
sev=c[3];
dis=0x0E;
time(4);

while(1)
{

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
