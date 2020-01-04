#include<stdio.h>
#include<conio.h>
int main(){
	system("cls");
	char alpha;

	printf("Enter any character : ");
	scanf("%c",&alpha);

	if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u')
	printf("\nits a vowel");
	
	else
	printf("its a cosonant");

	getch();
	return 0;
}