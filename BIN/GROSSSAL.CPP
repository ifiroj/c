#include<stdio.h>
#include<conio.h>

int main(){
	system("cls");
	float a,hra,da;
	
	printf("\nEnter amount of salary : ");
	scanf("%f",&a);
	
	if(a<=10000){
		hra=(0.2*a);
		printf("\nhra 20% =%.2f",hra);
		da=(0.8*a);
		printf("\nda 80% =%.2f",da);	
	}

	else if(a<=20000){
		hra=(0.25*a);
		printf("\nhra 20% =%.2f",hra);
		da=(0.9*a);
		printf("\nda 80% =%.2f",da);	
	}

	else if(a>20000){
		hra=(0.3*a);
		printf("\nhra 20% =%.2f",hra);
		da=(0.95*a);
		printf("\nda 80% =%.2f",da);	
	}

	getch();
	return 0;
}