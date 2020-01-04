/*	lab		: circle
coded by	: firoj acharya	*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	//clrscr();
	float d,c,a,r,pi;
	pi=3.14;

	printf("enter the value of radius ");
	scanf("%f",&r);

	d=2*r;
	printf("\nthe derimeter of circle is %.3f",d);

	c=2*pi*r;
	printf("\nthe circumference of circle is %.3f",c);

	a=pi*pow(r,3);
	printf("\nthe area of circle is %.3f",a);

	getch();
	return 0;
}