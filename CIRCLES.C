#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"");
	circle(50,50,100);
	getch();
	cosegraph();
}