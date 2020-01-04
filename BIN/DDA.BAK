#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

int main(){
	clrscr();

	int gd= DETECT, gm;
	initgraph(&gd,&gm,"..\\bgi");

	float x,y,xinc,yinc,step,dx,dy,x1,x2,y1,y2;

	printf("enter first coordinates : ");
	scanf("%f%f",&x1,&y1);
	printf("enter second coordinates : ");
	scanf("%f%f",&x2,&y2);

	dx=x2-x1;
	dy=y2-y1;

	if(fabs(dx)>fabs(dy))
		step=fabs(dx);
	else
		step=fabs(dy);

	xinc=dx/step;
	yinc=dy/step;

	putpixel(ceil(x),ceil(y),YELLOW);
	for(int i=1;i<step;i++){
		x=x+xinc;
		y=y+yinc;
		putpixel(ceil(x),ceil(y),YELLOW);
	}

	getch();
	return 0;
}