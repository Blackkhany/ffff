#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
rectangle(250,180,380,340);
getch();
closegraph();
}
