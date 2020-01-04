#include<stdio.h>
#include<conio.h>

struct TELEPHONE{
	char name[25];
	char phone_number[10];
	char address[30];
}s;

int main(){
	struct TELEPHONE ;
	system("cls");

	printf("\nEnter name : ");
	gets(s.name);

	printf("\nEnter number : ");
	gets(s.phone_number);

	printf("\nEnter address : ");
	gets(s.address);

	puts("\n\tInformation stored above are as follows :");
	printf("\nUser name : %s",s.name);
	printf("\nPhone number : %s",s.phone_number);
	printf("\nAddress : %s",s.address);

	getch();
	return 0;
}
