#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
circle(200,200,30);
circle(190,190,5);
arc(190,190,50,130,10);
circle(210,190,5);
arc(210,190,50,130,10);
arc(200,210,180,360,10);
line(187,210,193,210);
line(207,210,213,210);
line(198,195,195,200);
line(202,195,205,200);
line(195,200,200,205);
line(205,200,200,205);
getch();
closegraph();
}
