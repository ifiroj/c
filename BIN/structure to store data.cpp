#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct book{
	char title[100], author[100], edition[10],pub[100];
	long price,qty;
}a[5];

void input(struct book a[]){
	int i;
	
	printf("\nEnter the details one by one\n");
	for(i=0;i<2;i++){
		printf("\nEnter the title of the book:");
		scanf("%s",a[i].title);
		
		printf("\nEnter the author name:");
		scanf("%s",a[i].author);
		
		printf("\nEnter The edition:");
		scanf("%s",a[i].edition);
		
		printf("\nEnter the publication name:");
		scanf("%s",a[i].pub);
		
		printf("\nEnter the price:");
		scanf("%ld",&a[i].price);
		
		printf("\nEnter the quantity of books:");
		scanf("%ld",&a[i].qty);
	}
}

void disp_tot_cost(struct book a[]){
	int i;
	
	printf("\nThe total cost of the books are as follows\n");
	for(i=0;i<2;i++){
		printf("\nBook name=%s\ntotal price=%ld",a[i].title,a[i].price*a[i].qty);
	}
}

void sort(struct book a[]){
	int i,j;
	char t[100];
	
	for(i=0;i<1;i++){
		for(j=i+1;j<2;j++){
			if(strcmpi(a[i].title,a[j].title)>0){
				strcpy(t,a[i].title);
				strcpy(a[i].title,a[j].title);
				strcpy(a[j].title,t);
			}
		}
	}
}

void search(struct book a[]){
	int i,j,flag=0;
	char t[100];
	
	printf("\nEnter the title of the book:");
	scanf("%s",t);
	
	for(i=0;i<2;i++){
		if(strcmpi(a[i].title,t)==0){
			flag=1;
			printf("\nThe book is found! The details are\n");
			printf("\nAUTHOR=%s",a[i].author);
			printf("\nEdition=%s",a[i].edition);
			printf("\nPublication=%s",a[i].pub);
			printf("\nPRICE=%ld",a[i].price);
			printf("\nQuantity=%ld",a[i].qty);
			break;
		}
	}
		if(flag==0)
		printf("\nThe book is not in the list!!!");
}

int main(){
	
	input(a);
	sort(a);
	disp_tot_cost(a);
	search(a);
	
	getch();
	return 0;
}