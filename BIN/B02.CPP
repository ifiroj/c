/*lab		: all the arithematic operations
coded by	: firoj acharya	*/
#include<stdio.h>
#include<conio.h>
int main(){
	//clrscr();
	int a,b;
	float c;
	
	printf("enter value of A and B :: ");
	scanf("%d%d",&a,&b);

	c=a+b;
	printf("\nthe sum is %.2f",c);
	
	c=a-b;
	printf("\nthe difference is %.2f",c);
	
	c=a*b;
	printf("\nthe product is %.2f",c);
	
	c=a/b;
	printf("\nthe divison is %.2f",c);
	
	c=a%b;
	printf("\nthe modulus is %.2f",c);

	getch();
	return 0;
}
