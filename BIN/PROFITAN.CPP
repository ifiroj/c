#include<stdio.h>
#include<conio.h>
int main(){
	//clrscr();
	int sp,cp;
	
	printf("enter selling price : ");
	scanf("%d",&sp);
	
	printf("\nenter cost price : ");
	scanf("%d",&cp);
	
	if(sp>cp)
		printf("\nprofit");
	else printf("\nloss");
	getch();
	return 0;

}