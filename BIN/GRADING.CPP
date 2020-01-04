#include<stdio.h>
#include<conio.h>
int main(){
	//clrscr();
	int m1,m2,m3,m4,m5,per,tot;
	
	printf("enter marks of physics : ");
	scanf("%d",&m1);
	printf("enter marks of chemistry : ");
	scanf("%d",&m2);
	printf("enter marks of biology : ");
	scanf("%d",&m3);
	printf("enter marks of maths : ");
	scanf("%d",&m4);
	printf("enter marks of computer : ");
	scanf("%d",&m5);

	tot=m1+m2+m3+m4+m5;
	per=tot/5;

	if(per>=90 ){
		printf("\ngrade A" );
	}
	else if(per>=80){
		printf("\ngrade B ");
	}
	else if(per>=70){
		printf("\ngrade C" );
	}
	else if(per>=60){
		printf("\ngrade D ");
	}
	else if(per>=40){
		printf("\ngrade E" );
	}
	else if(per<40){
		printf("\ngrade F");
	}
	else {printf("\n failed");	
	}
	getch();
	return 0;
}