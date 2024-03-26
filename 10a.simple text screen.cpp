#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
int main()
{
int gd=DETECT,gm,i,maxx,maxy,key0;
initgraph(&gd,&gm,"C:\\TC\\BGI");
maxx=getmaxx();
maxy=getmaxy();
while(!kbhit())
{
for(i=0;i<maxy;i++)
{
cleardevice();
settextstyle(2,0,5);
outtextxy(maxx/2,i,"C Graphics");
delay(100);
}
}
getch();
}
