#include <At89s52.h>
#define LED1 P2_4
#define SW1 P2_0
#define SW2 P2_1
#define ON 0
#define OFF 1

void main(){
while(1)
{
if(SW1== 0&&SW2==0)
{
LED1 =0;
}else
{
LED1 =1;
}
}
}
