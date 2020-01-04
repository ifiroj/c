/*	lab		: max of 2 numbers
coded by	: firoj acharya */
#include<stdio.h>
#include<conio.h>
int main(){
	//clrscr();
	int a,b;
	printf("enter any two numbers : ");
	scanf("%d%d",&a,&b);
	if(a>b)
	printf("\n%d is maximum",a);
	else
	printf("\n%d is maximum",b);

	getch();
	return 0;
}