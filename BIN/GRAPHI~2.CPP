#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

int main(){
	clrscr();
	int i;
	char ch;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	int wx1=50;
	int wx2=125;
	int daba1=25;
	int daba2=150;


	/*

	display circle

	circle(250,250,50);
	setcolor(WHITE);
	for(i=25;i<333;i++){
		line(25+i,170,25+i,200);
		delay(10);
	} */

	 /* car
	while(1){
		ch=getch();
		if(ch=='d' || ch=='D'){
			cleardevice();
			wx1+=5;
			wx2+=5;
			daba1+=5;
			daba2+=5;
			rectangle(daba1,25,daba2,50);
			circle(wx1,50,10);
			circle(wx2,50,10);
		}
		if(ch==27){
			break;
		}
	}
	clrscr();
	printf("game over");
	*/

       for(i=25;i<333;i++){
		setcolor(GREEN);
		line(25+i,170,25+i,200);
		delay(10);
		setcolor(WHITE);
		settextstyle(SMALL_FONT,0,16);
		outtextxy(210,210,"Loading...");
		delay(10);
	}

	closegraph();

	getch();
	return 0;
}