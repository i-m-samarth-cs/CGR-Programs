#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main(){
/* request auto detection */
int gdriver = DETECT, gmode, errorcode;
int midx, midy;
int radius = 100;

/* initialize graphics and local variables */
initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

/* read result of initialization */
errorcode = graphresult();

midx = getmaxx() / 2;
midy = getmaxy() / 2;
setcolor(getmaxcolor());

/* draw the circle */
for(midx;midx<=900;midx++){
circle(midx, midy, radius);
delay(30);
cleardevice();
 }

/* clean up */
getch();
closegraph();

}
}