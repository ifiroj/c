/*	lab		: max of 3 numbers
coded by	: firoj acharya */
#include<stdio.h>
#include<conio.h>
int main(){
	//clrscr();
	int a,b,c;
	printf("enter any three numbers : ");
	scanf("%d%d%d",&a,&b,&c);

	if(a>b && a>c)
	printf("\n%d is maximum",a);
	else if(b>a && b>c)
	printf("\n%d is maximum",b);
	else
	printf("\n%d is maximum",c);

	getch();
	return 0;
}