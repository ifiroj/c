/*	LAB 	: DYNAMIC MEMORY ALLOCATION
	CODE BY : FIROJ ACHARYA
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main(){
	clrscr();
	int n,i,*x,*y;

	printf("kati ota number halne : ");
	scanf("%d",&n);

	//x=(int*)calloc(n,sizeof(int));
	x= (int*)malloc(n*sizeof(int));
	y=x;

	for(i=0;i<n;i++){
		scanf("%d",x);
		x++;
	}
	 //x-=n;
	for(i=0;i<n;i++){
		int s;
		printf("kun location ko value dakhaune ? ");
		scanf("%d",&s);
		y+=s;
		printf("%d ",*y);
		y++;
	}

	free(x);
	//free(y);
	getch();
	return 0;
}