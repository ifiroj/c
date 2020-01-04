#include<stdio.h>
#include<conio.h>

struct booklist{
	char title[25];
	char author[25];
	float price;
}a;

int main(){
	clrscr();
	int i;
	float total=0;

	for(i=0;i<4;i++){
		printf("\nenter title : ");
		scanf("%s",a.title);

		printf("enter author's name : ");
		scanf("%s",a.author);

		printf("price : ");
		scanf("%f",&a.price);

		total+=a.price;
	}
	printf("\nThe total price is: %.2f",total);

	getch();
	return  0;
}