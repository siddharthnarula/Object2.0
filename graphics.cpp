#include<stdio.h>
#include<graphics.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm, " ");
    for(int i=100;i>400;i++)
    putpixel (i,200,WHITE);
    getch();
    closegraph();


}
