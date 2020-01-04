#include<stdio.h>
#include<conio.h>
int main(){
	//clrscr();
	int a;

	printf("enter any number to check wether its +ve -ve or zero : ");
	scanf("%d",&a);

	if(a==0)
	printf("\nits zero");

	else if(a<0)
	printf("\nits negative");

	else
	printf("its positive");

	getch();
	return 0;
}