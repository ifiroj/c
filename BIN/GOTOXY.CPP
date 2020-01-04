#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#define ESC 27

int main(){
	here:
	clrscr();

	char name[20],add[25];
	char num[11],grade[5];
	char id[5],roll[3],ch;
	int x=1,y=3;

	printf("----------------------------------------------------------------------\n");
	printf("ID\tNAME\tGRADE\tROLL\tADDRESS\t  PHONE\n");
	printf("----------------------------------------------------------------------\n");
	while(1){
		ch=getch();
		if(ch==ESC){
			break;
		}else{

		x=1;
		y=y+1;
		gotoxy(x,y);
		fflush(stdin);
		scanf("%s",id);

		x=x+8;
		y=y;
		gotoxy(x,y);
		fflush(stdin);
		scanf("%s",name);

		x=x+9;
		y=y;
		gotoxy(x,y);
		fflush(stdin);
		scanf("%s",grade);

		x=x+7;
		y=y;
		gotoxy(x,y);
		fflush(stdin);
		scanf("%s",roll);

		x=x+8;
		y=y;
		gotoxy(x,y);
		fflush(stdin);
		scanf("%s",add);

		x=x+10;
		y=y;
		gotoxy(x,y);
		fflush(stdin);
		scanf("%s",num);
		}//else

	}//while

	printf("do you want to save(y/n)? ");
	ch=getch();

	if(ch=='y'){
		FILE *file;
		file=fopen("c:\\file.txt","a");
		fprintf(file,"%s %s %s %s %s %s",id,name,grade,roll,add,num);
		printf("saved");
		delay(2000);
		fclose(file);
	}else{
		goto here;
	}

		getch();
		return 0;
}