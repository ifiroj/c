/*	lab		: leap year
coded by	: firoj acharya */

#include<stdio.h>
#include<conio.h>
int main(){
	system("cls");
	int y;

	printf("number of  year : ");
	scanf("%d",&y);
	
	if(y%4==0 && y%100!=0){
	printf("\nits a leap year");
	}
	
	else if(y%400==0){
    printf("\nits not leap year");
	}
	
	else{
    printf("\nits not a leap year");}
	
	getch();
	return 0;
}
