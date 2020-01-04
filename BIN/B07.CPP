/*	lab		: days weeks years
coded by	: firoj acharya	*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	//clrscr();
	int d,w,y;

	printf("enter number of days ");
	scanf("%d",&d);

	y=d/365;
	w=(d-(y*365))/7;
	
	printf("\nyear = %d",y);
	printf("\nweek =%d",w);


	getch();
	return 0;

}