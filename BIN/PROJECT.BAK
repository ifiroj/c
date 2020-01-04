#include<stdio.h>
#include<conio.h>
#include "demo.h"

int main(){

	here:
	system("cls");
	int n;
	char ch;

	printf("-----------------------------------------------\n");
	printf("\tWellcome to Departmental store\n");
	printf("-----------------------------------------------\n");
	printf("    1. Add entry\n");
	printf("    2. Display all entries\n");
	printf("    3. Search by id\n");
	printf("    4. Search by group\n");
	printf("    5. Update product\n");
	printf("    6. Delete the product\n");
	printf("    7. Sales\n");
	printf("    8. Exit\t");
	scanf("%d",&n);

	switch(n){
		case 1:
			new_entry();
			break;

		case 2:
			show_entry();
			break;

		case 3:
			search_by_id();
			break;

		case 4:
			search_by_group();
			break;

		case 5:
			update();
			break;

		case 6:
			delate();
			break;

		case 7:
			sale();
			getch();
			break;

		case 8:
			printf("\nThank you for using this software\n");
			delay(345);
			exit(0);

		default:
			printf("\nWrong input");
	}
			printf("\n\nDo you want to continue(y/n)\n");
			delay(567);
			ch=getch();

			if(ch=='y' || ch=='Y'){
				goto here;
			}
			else{
				system("cls");
				printf("\nThank you.\n");
				delay(345);
			}

			getch();
			return 0;
}
