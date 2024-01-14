#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void dda()
{
  int x0=100,y0=100,x1=500,y1=300;
  line(x0,y0,x1,y1);

  int x2=100,y2=100,x3=500,y3=100;
  line(x2,y2,x3,y3);

  int x4=500,y4=300,x5=500,y5=100;
  line(x4,y4,x5,y5);
  }
void main()
{
  clrscr();
  int gd= DETECT,gm;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  dda();
  getch();
  closegraph();
}
