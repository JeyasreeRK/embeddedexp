#include <At89s52.h>
#define LED1 P2_4
#define SW1 P2_0
#define SW2 P2_1
#define ON 0
#define OFF 1

void main()
{
LED1=1;
while(1)
{
if(SW1== 1&&SW2==1)
{
LED1 =0;
}else
{
LED1 =1;
}
}


}
