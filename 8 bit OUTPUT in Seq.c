                      METHOD 1(normal)

#include <At89s52.h>
void time(int);
void main()
{

while(1){
P0=0xAA;
time(1);
P0=0x55;
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

       METHOD 2(Using shift)

#include <At89s52.h>
void time(int);
void main()
{
char d=0xAA;
while(1){
P0=d;
time(1);
P0=(d<<1)|(d>>7);
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
