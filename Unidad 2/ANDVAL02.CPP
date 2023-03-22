#include <graphics.h>
#include <conio.h>
#include <dos.h>


int main(void){
int gdriver=DETECT,gmode,i;
initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");


while(!kbhit()){

i++;
if(i>=630)
i=0;

settextstyle(8,HORIZ_DIR,4);
setcolor(GREEN);
outtextxy(i,220,"TEC MADERO");
delay(10);
setfillstyle(SOLID_FILL,YELLOW);
bar(0,0,640,480);


}


getch();
closegraph();
return 0;

}