/*	lab		: alphabets
coded by	: firoj acharya	*/

#include<stdio.h>
#include<conio.h>
int main(){
	system("cls");
	char alpha;

	printf("enter any alphabet : ");
	scanf("%c",&alpha);

	if(alpha>='A' && alpha<='Z') 
		printf("\nits  alphabet");

	else if (alpha>='a' && alpha<='z')
		printf("\nits alphabet");
	
	else
		printf("its not  alphabet");

	getch();
	return 0;

}