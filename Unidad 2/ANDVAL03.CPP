#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main(void)
{
   int gdriver = DETECT, gmode;
   initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
   setcolor(14);
   setfillstyle(3,RED);
   rectangle(0,0,639,479);
   floodfill(10,10,14);
   setfillstyle(SOLID_FILL,BLUE);
    getch();
   circle(213,240,50);
   circle(320,100,100);
   circle(564,402,75);
   circle(25,453,25);
    getch();
    floodfill(10,10,14);

   getch();
   closegraph();
   return 0;
}