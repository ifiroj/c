#include<stdio.h>
#include<conio.h>

	void add(int a, int b){
		int c;
		c=a+b;
		printf("\nRESULT = %d",c);
	}

	int sub(int a,int b){
		   int c;
		   c=a-b;
		   return 0;
	}

	void mul(int a, int b, int c){
		int d;
		
		printf("\nEnter value of a and b");
		scanf("%d%d%d",&a,&b,&c);
		
		d=a*b*c;
		printf("\nResult =%d",d);
	}
	
	float div(float a, float b){
		float c;
		c=a/b;
		return c;
	}

int main(){
	system("cls");
	int menu,a,b,c;

	printf("\n\tSELECT ANY OPTION\n");
	printf("    1. ADDITION\n");
	printf("    2. SUBTRACTION\n");
	printf("    3. MULTIPLICATION\n");
	printf("    4. DIVISION\n");
	scanf("%d",&menu);

	switch(menu){

		case 1:

			printf("\nEnter the value of a and b : ");
			scanf("%d%d",&a,&b);
			add(a,b);
			break;

		case 2:

			printf("\nEnter value of a and b : ");
			scanf("%d%d",&a,&b);
			sub(a,b);
			printf("\nresult=%d",c);
			break:

		case 3:

			printf("Enter value of a and b : ");
			scanf("%d %d",&a,&b);
			mul(a,b);
			break;

		case 4:

			printf("\nEnter value of a and b : ");
			scanf("%d%d",&a,&b);
			printf("result=%f",div(a,b));
			break;

		default:
			
			printf("\nERROR \n");
	}
	
	getch();
	return 0;
}