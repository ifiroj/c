#include <stdio.h>
#include<conio.h>

void johncena(int c[2][2],int d[2][2]);

int main(){
    clrscr();
    int c[2][2],d[2][2],i,j;

    printf("\nEnter values for first matrix : ");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&c[i][j]);
        }
    }
    
    printf("\nEnter values for second matrix : ");
    for(i=0;i<2;i++){
	   for(j=0;j<2;j++){
		  scanf("%d",&d[i][j]);
	   }
    }

        johncena(c,d);
	getch();    
	return 0;
}

void johncena(int c[2][2],int d[2][2]){
    int i,j,e[2][2];

    printf("\nResult of Addition: ");
    for(i=0;i<2;i++){
	   for(j=0;j<2;j++) {
		  e[i][j]=c[i][j]+d[i][j];
		  printf("%d\t",e[i][j]);
	   }
    }
}
