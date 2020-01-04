#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>

struct inventory{
	char qty[10];
	char brand[25];
	char group[25];
	char name[25];
}t;

FILE *file,*temp,*sell;

void purchase();
void display();
void search();
void update();
void remove();
void sale();

int main(){
	while(1){
		here:
		system("cls");
		char choice;
		int option;

		puts("\n\tInventory Management Application\n");
		puts("    1. Purchase Item");
		puts("    2. Display All Items");
		puts("    3. Search By Item Name");
		puts("    4. Update By Item Name");
		puts("    5. Delete By Item Name");
		puts("    6. Sale Item");
		puts("    7. Exit");
		puts("\nSelect an option : ");
		scanf("%d",&option);

		switch(option){

			case 1:
				system("cls");
				purchase();
				break;

			case 2:
				system("cls");
				display();
				break;

			case 3:
				system("cls");
				search();
				break;

			case 4:
				system("cls");
				update();
				break;

			case 5:
				system("cls");
				remove();
				break;

			case 6:
				system("cls");
				sale();
				break;

			case 7:
				system("cls");
				puts("Thank You");
				delay(555);
				exit(0);

			default:
				system("cls");
				puts("\nInvalid Selection");
				break;
		}

		puts("\n\nDo you want to continue ? (y/n) ");
		choice=getch();
		if(choice=='n' || choice=='N'){
			system("cls");
			puts("\nThank you for using this software.");
			delay(444);
			exit(0);
		}

		else{
			if(choice=='y' || choice=='Y'){
				goto here;
			}
		}
	}

	getch();
	return 0;
}

void purchase(){
	system("cls");
	char continue;

	puts("\nEnter Group Name : ");
	fflush(stdin);
	scanf("%s",t.group);

	puts("\nBrand Name : ");
	fflush(stdin);
	scanf("%s",t.brand);

	puts("\nEnter Model Name : ");
	fflush(stdin);
	scanf("%s",t.name);

	puts("\nEnter Quantity : ");
	scanf("%s",t.qty);

	puts("\nDo you want to save this information (y/n)?");
	scanf("%s",continue);
	
	if(continue=='y' || continue=='Y'){
		file=fopen("c:\\purchase.txt","a");
		fprintf(file,"%s\t\t%s\t\t%s\t\t%s\n",t.group,t.brand,t.name,t.qty);
		fclose(file);
		puts("\n\nEntry successful");
	}
	else{
		puts("\nThats alright");
		delay(345);
	}
}

void display(){
	system("cls");
	printf("---------------------------------------------------------------------------\n");
	printf("\t\t\t  Available Items\n\n");
	printf("GROUP\t\tBRAND NAME\t\tITEM NAME\t\tQUANTITY\n");
	printf("---------------------------------------------------------------------------\n");

	file=fopen("c:\\purchase.txt","r");
	while(!feof(file)){
		fscanf(file,"%s %s %s %s",t.group,t.brand,t.name,t.qty);
		if(feof(file)){
			break;
		}
		printf("%s\t\t%s\t\t\t%s\t\t\t%s\n",t.group,t.brand,t.name,t.qty);
	}
	fclose(file);
	getch();
}

void search(){
	system("cls");
	char name[25],search[25],brand[25];
	char qty[10],group[25];
	int flag=0;

	printf("\nEnter Item Name: ");
	scanf("%s",name);
	file=fopen("C:\\purchase.txt","r");
	while(!feof(file)){
		fscanf(file,"%s %s %s %s",group,brand,search,qty);
		if(strcmp(group,search)==0){
			flag=1;
			break;
		}
	}
	fclose(file);

	if(flag==1){
		file=fopen("c:\\purchase.txt","r");
		temp=fopen("C:\\tempo.txt","a");
		printf("\nGROUP\t\tBRAND NAME\t\tITEM NAME\t\tQUANTITY\n");
		while(!feof(file)){
			fscanf(file,"%s %s %s %s",group,brand,search,qty);
			if(feof(file)){
				break;
			}
			if(strcmp(group,search)==0){
				break;
			}
		}
			fclose(file);
			fclose(temp);
	       printf("%s\t\t%s\t\t\t%s\t\t\t%s\n",group,brand,name,qty);	       
	}  

	else{
		system("cls");
		printf("\nItem not found");
	}
	getch();
}

void update(){
	system("cls");
	int flag=0;
	char search[30],brand[30],name[30],group[30],qty[11];

	here:
	printf("\nEnter group name to search: ");
	scanf("%s",search);

	file=fopen("C:\\purchase.txt","r");
	while(!feof(file)){
	       fscanf(file,"%s %s %s %s",group,brand,name,qty);
	       if(feof(file) == NULL){
				printf("\nFile doesnot exist.");
				delay(345);
				break;
			}
	       if(strcmp(name,search)==0){
			flag=1;
			break;
	       }
	}
	fclose(file);

	if(flag==1){
		file=fopen("c:\\purchase.txt","r");
		temp=fopen("c:\\tempo.txt","a");
		while(!feof(file)){
			fscanf(file,"%s %s %s %s",group,brand,name,qty);
			if(feof(file)){
				break;
			}
			if(strcmp(name,search)==0){
				printf("\nEnter new group name: ");
				scanf("%s",search);
			}
			fprintf(temp,"%s\t\t%s\t\t\t%s\t\t\t%s\n",search,brand,name,qty);
		}
		fclose(file);
		fclose(temp);
		file=fopen("c:\\purchase.txt","w");
		fclose(file);
		temp=fopen("c:\\tempo.txt","r");
		
		while(!feof(temp)){
			fscanf(temp,"%s %s %s %s",group,brand,name,qty);
			if(feof(temp)){
				break;
			}
			file=fopen("c:\\purchase.txt","a");
			fprintf(file,"%s\t\t%s\t\t\t%s\t\t\t%s\n",group,brand,name,qty);
		}
		fclose(file);
		fclose(temp);

		printf("\nRecord updated");
		delay(123);
	}

	else{
		system("cls");
		printf("\nRecord not found");
	}
	getch();
}

void remove(){
	system("cls");
	int flag=0;
	char search[30],name[30],brand[30],group[30],qty[11],really;

	printf("\nEnter item name: ");
	scanf("%s",search);
	file=fopen("c:\\purchase.txt","r");
	while(!feof(file)){
	       fscanf(file,"%s",name);
	       if(strcmp(name,search)==0){
			flag=1;
			break;
	       }
	}
	fclose(file);
	if(flag==1){
		system("cls");

		file = fopen("c:\\purchase.txt","r");
		temp=fopen("c:\\tempo.txt","a");
		while(!feof(file)){
			fscanf(file,"%s %s %s %s",group,brand,name,qty);
			if(feof(file)){
				break;
			}
		
			if(strcmp(name,search)==0){
				printf("\nDo you want to delete %s? (y/n): ",search);
				scanf("%c",&really);
		
				if(really=='y' || really=='Y'){
					puts("\nItem deleted");
					break;
				}
		
				else{
					if(really=='n'||really=='N'){
						puts("\nItem not deleted");
						break;
					}
				}
			}

			else{
				fprintf(temp,"%s\t\t%s\t\t\t%s\t\t\t%s\n",group,brand,name,qty);
			}
		}

		fclose(file);
		fclose(temp);
		file=fopen("c:\\purchase.txt","w");
		fclose(file);
		file=fopen("c:\\purchase.txt","a");
		temp=fopen("c:\\tempo.txt","r");
		while(!feof(temp)){
			fscanf(temp,"%s %s %s %s",group,brand,name,qty);
			if(feof(temp)){
				break;
			}
			fprintf(file,"%s\t\t%s\t\t\t%s\t\t\t%s\n",group,brand,search,qty);
		}
		fclose(file);
		fclose(temp);
		temp=fopen("c:\\tempo.txt","w");
		fclose(temp);  
	}

	else{
		system("cls");
		printf("\nRecord not found");
	}
	getch();
}

void sale(){
	system("cls");
	puts("\nUnder Construction");
}
