#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

int main(void){
int gdriver=DETECT,gmode;
double x,y,k;

initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
setcolor(YELLOW);
line(0,240,640,240);
line(320,0,320,640);
//lado derecho parabola
setcolor(GREEN);
moveto(320,240);
for(x=0;x<=640;x=x+1){
y=(x*x)/100;
lineto(320+x,240-y);
}
//lado izquierdo
moveto(320,240);
for(x=0;x<=640;x=x+1){
y=.01*(x*x);
lineto(320-x,240-y);
}

//lado derecho parabola
setcolor(GREEN);
moveto(320,240);
for(x=0;x<=640;x=x+1){
y=.01*(x*x);
lineto(320+x,240+y);
}
//lado izquierdo
moveto(320,240);
for(x=0;x<=640;x=x+1){
y=.01*(x*x);
lineto(320-x,240+y);
}


getch();
closegraph();
return 0;

}