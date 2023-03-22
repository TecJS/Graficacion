#include <graphics.h>
#include <conio.h>

int main(void)
{
   int gdriver = DETECT, gmode,i;
   int roly[8];
   initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
   
    roly[0]=20;
    roly[1]=240;
    roly[2]=620;
    roly[3]=20;
    roly[4]=590;
    roly[5]=460;
    roly[6]=320;
    roly[7]=240;

    for(i=EMPTY_FILL;i<USER_FILL;i++){

        setfillstyle(i,i+1);
        fillpoly(4,roly);
        getch();
    }


   
   closegraph();
   return 0;
}