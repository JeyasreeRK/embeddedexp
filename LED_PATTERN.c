METHOD 1

#include <At89s52.h>

void time(int);
void main()
{

while(1){
 P0=~0x01;
 time(1);
 P0=~0x02;
 time(1);
 P0=~0x04;
 time(1);
 P0=~0x08;
 time(1);
 P0=~0x10;
 time(1);
 P0=~0x20;
 time(1);
 P0=~0x40;
 time(1);
 P0=~0x80;
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

     METHOD 2(using shift )
#include <At89s52.h>
void time(int);
void main()
{
void main()
{
 char d=0x01;
char i;
while(1)
{
 for(i=0;i<8;i++)
 {
 P0=~(d<<i);
 time(1);
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

       METHOD 3(using array)
#include <At89s52.h>
void time(int);
const char d[9]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
void main()
{
 
char i;
while(1)
{
 for(i=0;i<8;i++)
 {
 P0=~(d[i]);
 time(1);
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
