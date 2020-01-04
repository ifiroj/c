#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	clrscr();
	char i[100];
	int c=1,j;

	printf("enter any sentence : ");
	scanf("%[^\n]",i);

	for(j=0;j<=strlen(i);j++){
		if(i[j]==' '){
		c++;
		}
	}
	printf("the number of words are :%d",c);


	getch();
	return 0;
}