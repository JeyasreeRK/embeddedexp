#include <AT89s52.h>
void time(int);
void main()
{
P2_0=1;
while(1)
{
P2_0=0;
time(1);
P2_0=1;
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
