/*	lab		: perimeter of triangle
coded by	: firoj acharya	*/
#include<stdio.h>
#include<conio.h>
int main(){
	//clrscr();
	float p,l,b;

	printf("lenght of rectangle : ");
	scanf("%f",&l);

	printf("breadth of rectangle : ");
	scanf("%f",&b);

	p=2*(l+b);
	printf("the perimeter of rectagle is %.3f",p);

	getch();
	return 0;
}