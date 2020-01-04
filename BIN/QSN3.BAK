#include<stdio.h>
#include<conio.h>
int fib(int n);
int main(){
	clrscr();
	int n,i;

	printf("enter number of series : ");
	scanf("%d",&n);
	printf("fibonacci series upto %d\n ",n);
	for(i=0;i<n;i++){
		printf("%d  ",fib(i));
	}

	getch();
	return 0;

}
int fib(int n){

	if(n==0)
	return 0;

	if(n==1)
	return 1;

	else
	return fib(n-1)+fib(n-2);

}