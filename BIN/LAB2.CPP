#include<stdio.h>
#include<conio.h>
int main(){
	system("cls");
	int a;

	printf("\nEnter any number : ");
	scanf("%d",&a);

	if(a%5==0 && a%11==0)
	printf("\nits divisible by 5 & 11");
	
	else
	printf("its not divisible by 5 and 11");

	getch();
	return 0;
}