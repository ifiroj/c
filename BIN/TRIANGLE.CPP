#include<stdio.h>
#include<conio.h>
int main(){
	
	system("cls");
	int a,b,c;
	printf("enter three sides of triangle : ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a==b || b==c || c==a)
		printf("\nisosceles triangle");
	
	else if(a=b=c)
		printf("\nequilateral triangle");
	
	else printf("\nscalene triangle");

	getch();
	return 0;
}