/*	lab		: celcius to fahrenheit
coded by	: firoj acharya	*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	//clrscr();
	float c,f;

	printf("\nenter temperature in celcius : ");
	scanf("%f",&c);

	f=(c*(9/5)+32);
	printf("\ntemperature in fahrenheit is %.3f",f);

	getch();
	return 0;
}