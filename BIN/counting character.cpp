#include<stdio.h>
#include<conio.h>

int main(){
	int i,count=0;
	char a[]="TRIBHUVAN UNIVERSITY";

	for(i=0;i<=strlen(a);i++){
    		if(a[i]=='I'){
      			printf("%s",a[i]);
				count+=1;
     		}
	}	
	
	printf("There are %d I.",count);
	
	getch();
	return 0;
}