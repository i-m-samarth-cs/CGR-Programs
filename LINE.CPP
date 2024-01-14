#include<stdio.h>
#include<graphics.h>

void main()
{
  int gd= DETECT,gm;
  int x0,x1,y0,y1;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  setbkcolor(WHITE);
  x0=100,y=100,x1=500,y1=300;
  line(x0,y0,x1,y1);

  closegraph();
}
