#include<graphics.h>
#include<iostream>
#include<dos.h>
#include<conio.h>
void boundaryfill(int x ,int y,int f_color,int b_color)
{
if(getpixel(x,y)!=b_color && getpixel(x,y)!=f_color)
{
delay(20);
putpixel(x,y,f_color);
boundaryfill(x+1,y,f_color,b_color);
boundaryfill(x,y+1,f_color,b_color);
boundaryfill(x-1,y,f_color,b_color);
boundaryfill(x,y-1,f_color,b_color);
}
}
int main()
{
int gd=DETECT,gm,radius;
int x,y;
std::cout<<"enter the x and y position of the circle";
std::cin>>x;
std::cin>>y;
std::cout<<"enter radius of circle\n";
std::cin>>radius;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
circle(x,y,radius);
boundaryfill(x,y,4,15);
closegraph();
return 0;
}

