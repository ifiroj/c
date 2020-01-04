/*lab		: odd even
coded by	: firoj acharya	*/
#include<stdio.h>
#include<conio.h>
int main(){
	//clrscr();
	int a;

	printf("enter any number : ");
	scanf("%d",&a);

	if(a/2==0)
	printf("%d is even",a);
	else
	printf("%d is odd",a);

	getch();
	return 0;
}