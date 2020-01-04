#include<stdio.h>
#include<conio.h>
int main(){
	clrscr();
	int a[50],pos,i,n;

	printf("number of elements : ");
	scanf("%d",&n);

	printf("enter %d elements : ",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	printf("position to delete ");
	scanf("%d",&pos);

	for(i=pos;i<n;i++){
		a[i]=a[i+1];
	}
	n--;

	printf("after deleting item : ");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}

	getch();
	return 0;
}
