#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	clrscr();
	int i,count=0;
	char a[]="TRIBHUVAN UNIVERSITY";

	for(i=0;i<=strlen(a);i++){
		if(a[i]=='I'){
			printf("%s",a[i]);
			count+=1;
		}

	}
	printf("\nThere are %d 'I' in TRIBHUVAN UNIVERSITY ",count);

	getch();
	return 0;
}