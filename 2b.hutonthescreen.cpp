#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(YELLOW);
rectangle(174,201,276,393);
rectangle(201,299,246,393);
rectangle(276,201,440,393);
line(174,201,224,120);
line(274,201,224,120);
line(224,120,405,120);

line(405,120,440,201);
getch();
closegraph();
return 0;
}

