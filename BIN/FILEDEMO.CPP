#include<stdio.h>
#include<conio.h>

char roll[5];
char name[50];
char address[50];

int main(){
	clrscr();

	printf("NAME : ");
	gets(name);
	puts("ROLL NUMBER : ");
	gets(roll);
	puts("ADDRESS : ");
	gets(address);

	//create file
	FILE *p;
	//open
	p=fopen("c:file.txt","w");
	//write
	fprintf(p,"%s\t%s\t%s\n",name,roll,address);
	//close
	fclose(p);
	printf("\nsuccessfully stored");

	getch();
	return 0;
}