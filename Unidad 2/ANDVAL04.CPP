#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main(void)
{
   int gdriver = DETECT, gmode;
   initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
   setcolor(14);
   setfillstyle(SOLID_FILL,RED);
   rectangle(0,0,639,479);
   floodfill(10,10,14);
   setfillstyle(SOLID_FILL,BLUE);
    getch();
   circle(213,240,50);
   circle(320,100,100);
   circle(564,402,75);
   circle(27,448,25);
    getch();
    
    floodfill(10,10,14);
    getch();

    setfillstyle(3,BROWN);
    floodfill(213,240,14);
    getch();

    setfillstyle(2,YELLOW);
    floodfill(320,100,14);
    getch();

    setfillstyle(2,CYAN);
    floodfill(564,402,14);
    getch();

    setfillstyle(4,GREEN);
    floodfill(25,453,14);
    

   getch();
   closegraph();
   return 0;
}