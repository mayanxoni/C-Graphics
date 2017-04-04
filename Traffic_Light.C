//Here's my name written in the from of Lines using C Graphics
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main(){
	int gd=DETECT, gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	for(;!kbhit();){

		//RED
		setcolor(WHITE);
		setfillstyle(SOLID_FILL, RED);
		rectangle(50,150,550,350);
		circle(150,250,70);
		floodfill(150,250,WHITE);
		outtextxy(100,400,"STOP");
		delay(1000);
		cleardevice();
		if(kbhit())
			break;

		//YELLOW
		setcolor(WHITE);
		setfillstyle(SOLID_FILL, YELLOW);
		rectangle(50,150,550,350);
		circle(300,250,70);
		floodfill(300,250,WHITE);
		outtextxy(250,400,"READY");
		delay(1000);
		cleardevice();
		if(kbhit())
			break;


		//GREEN
		setcolor(WHITE);
		setfillstyle(SOLID_FILL, GREEN);
		rectangle(50,150,550,350);
		circle(450,250,70);
		floodfill(450,250,WHITE);
		outtextxy(400,400,"GO");
		delay(1000);
		cleardevice();
		if(kbhit())
			break;
		
	}
	getch();
}
