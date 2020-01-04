/*	lab		: cm to m and km
coded by	: firoj acharya	*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	//clrscr();
	float c,m,k;

	printf("centimeter = ");
	scanf("%f",&c);

	m = c/100;
	k = c/1000;
	
	printf("\nmeter = %.3f",m);
	printf("\nkilometer = %.3f",k);

	getch();
	return 0;

}