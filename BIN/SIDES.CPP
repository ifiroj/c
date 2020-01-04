#include<stdio.h>
#include<conio.h>
int main(){
	//clrscr();
	int a,b,c,d,e,f;

	printf("enter sides of triangle : ");
	scanf("%d%d%d",&a,&b,&c);

	d=a+b;
	e=b+c;
	f=a+c;

	if(d<c || e<a || f<b )
	printf("its valid");

	else
	printf("its not valid");



	getch();
	return 0;
}