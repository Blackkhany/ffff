 #include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void floodfill(int x,int y,int oldcolor,int newcolor)
{
if(getpixel(x,y)==oldcolor)
{
delay(20);
putpixel(x,y,newcolor);
floodfill(x+1,y,oldcolor,newcolor);
floodfill(x,y+1,oldcolor,newcolor);
floodfill(x-1,y,oldcolor,newcolor);
floodfill(x,y-1,oldcolor,newcolor);
}
}
int main()
{
int gd=DETECT,gm,radius;
int x, y;
printf("enter x and y position for circle\n");
scanf("%d%d",&x,&y);
printf("enter radius of circle\n");scanf("%d",&radius);
initgraph(&gd,&gm,"c:\\TC\\BGI");
circle(x,y,radius);
floodfill(x,y,0,15);
closegraph();
getch();
}
