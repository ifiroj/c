#include<stdio.h>
#include<conio.h>
int main(){
	//clrscr();
	int amount;
	int n1=0,n2=0,n3=0,n4=0,n5=0;
	int n6=0,n7=0,n8=0,n9=0,n10=0;

	printf("enter any amount : ");
	scanf("%d",&amount);

	if (amount>=1000){
		n10=amount/1000;
		amount-=n10*1000;
		printf("\n1000 %d notes",n10);
	}
	if (amount>=500){
		n9=amount/500;
		amount-=n9*500;
		printf("\n500 %d notes",n9);
	}
	if (amount>=250){
		n8=amount/250;
		amount-=n8*250;
		printf("\n250 %d notes",n8);
	}
	if (amount>=100){
		n7=amount/100;
		amount-=n7*100;
		printf("\n100 %d notes",n7);
	}
	if (amount>=50){
		n6=amount/50;
		amount-=n6*50;
		printf("\n50 %d notes",n6);
	}
	if (amount>=20){
		n5=amount/20;
		amount-=n5*20;
		printf("\n20 %d notes",n5);
	}
	if (amount>=10){
		n4=amount/10;
		amount-=n4*10;
		printf("\n10 %d notes",n4);
	}
	if (amount>=5){
		n3=amount/5;
		amount-=n3*5;
		printf("\n5 %d notes",n3);
	}
	if (amount>=2){
		n2=amount/2;
		amount-=n2*2;
		printf("\n2 %d notes",n2);
	}
	if (amount>=1){
		n1=amount/1;
		amount-=n1*1;
		printf("\n1 %d notes",n1);
	}



	getch();
	return 0;
	}