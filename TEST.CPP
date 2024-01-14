
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
int gdriver=DETECT,gmode,errorcode;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
line(100,100,400,400);
setcolor(RED);
setbkcolor(YELLOW);
getch();
}