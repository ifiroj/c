#include<stdio.h>
#include<conio.h>

int main(){
	system("cls");
	float n,a,sum,tot;
	
	printf("\nenter the unit : ");
	scanf("%f",&n);
	
	if(n<=50){
		a=(n*0.5);
		printf("\nprice is %.2f",a);
	}

	else if(n<=150){
		a=((n-50)*0.75)+25;
		printf("\nprice is %.2f",a);
	}

	else if(n<=250){
		tot=((n-150)*1.20)+100;
		printf("\nprice is %.2f",tot);
	}

	else{
		sum=((n-250)*1.50)+220;
		printf("\nprice is %.2f",sum);
	}
	
	getch();
	return 0;
}
