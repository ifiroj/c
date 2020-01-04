/*	LAB 	: DYNAMIC MEMORY ALLOCATION
	CODE BY : FIROJ ACHARYA			*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

	clrscr();
	int pro=1,*a,i,n;

	printf("\nenter value of n : ");
	scanf("%d",&n);

	a=(int*)calloc(n,sizeof(int));

	printf("\nenter %d numbers : ",n);
	for(i=0;i<n;i++){
		scanf("%d",a);
		pro*=*a;
		a++;
	}

	printf("\nthe product is : %d ",pro);
	free(a);

	getch();
	return 0;
}