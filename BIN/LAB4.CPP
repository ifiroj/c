#include<stdio.h>
#include<conio.h>
int main(){
	system("cls");
	char alpha;

	printf("Enter any character : ");
	scanf("%c",&alpha);

	if(alpha>='a' && alpha<='z' || alpha>='A' && alpha<='Z')
	printf("\nits an alphabet");

	if(alpha>='0' && alpha<='9')
	printf("\nits a number");

	else
	printf("\nits a special character");

	getch();
	return 0;
}