#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main(){
	int gd=DETECT,gm,x,y;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	for(x=1;!kbhit();x++){
		line(0+x,getmaxy()-x,getmaxx()-x,getmaxy()-x);
		line(getmaxx()-x,0+x,getmaxx()-x,getmaxy()-x);
		line(0+x,0+x,0+x,getmaxy()-x);
		line(0+x,0+x,getmaxx()-x,0+x);
		delay(50);
		cleardevice();
	}
}