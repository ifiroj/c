#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
#define ESC 27


FILE *file;
FILE *temp;

	char ch;
	int y,r,q,x,flag=0;
	char a[12];
	char s[15];
	char d[14];
	char n[20];
	char g[20];
	char search[20];

struct inventory{
	char name[30];
	char id[30];
	char group[30];
	int quantity,rate;
}i;


void new_entry(){
	system("cls");
	 x=25;
	 y=1;
	gotoxy(x,y);
	textcolor(YELLOW);
	cprintf("Departmental Sotore");
		x=1;
		y=2;
	gotoxy(x,y);
	cprintf("----------------------------------------------------------------------");
		x=1;
		y=3;
	gotoxy(x,y);
	cprintf("SALE NO.    DATE       GOOD'S NAME     GROUP         QTY      RATE");
		x=1;
		y=4;
	gotoxy(x,y);
	cprintf("----------------------------------------------------------------------");

	 printf("\n");

	file=fopen("c:\\inventory.txt","a");
	while(1){

	ch=getch();
	if(ch==ESC){
	       break;
	}
				x=1;
				y=y+1;
				gotoxy(x,y);
			scanf("%s",i.id);

				x=12;
				y=y;
				gotoxy(x,y);
				struct date today;
				getdate(&today);
			printf("%d/%d/%d",today.da_day,today.da_mon,today.da_year);

				x=24;
				y=y;
				gotoxy(x,y);
			scanf("%s",i.name);

				x=40;
				y=y;
				gotoxy(x,y);
			scanf("%s",i.group);

				x=54;
				y=y;
				gotoxy(x,y);

			scanf("%d",&i.quantity);
				x=63;
				y=y;
				gotoxy(x,y);
			scanf("%d",&i.rate);

	fprintf(file,"%s\t%d:%d:%d\t%s\t\t%s\t\t%d\t\t%d\n",i.id,today.da_day,today.da_mon,today.da_year,i.name,i.group,i.quantity,i.rate);
	}//while

		system("cls");
		x=250;
		y=250;
		gotoxy(x,y);
		textcolor(GREEN);
	cprintf("file saved");
		delay(500);
		system("cls");
	//close file
	fclose(file);
}

void show_entry(){
	system("cls");

	x=25;
	 y=1;
	  gotoxy(x,y);
	   textcolor(YELLOW);
	    cprintf("Departmental Sotore");
	x=63;
	 y=y;
	  gotoxy(x,y);
	   struct date today;
	    getdate(&today);
	     cprintf("%d/%d/%d",today.da_day,today.da_mon,today.da_year);

	x=1;
	 y=2;
	  gotoxy(x,y);
	   cprintf("----------------------------------------------------------------------");
	x=1;
	 y=3;
	  gotoxy(x,y);
	   cprintf("SALE NO.    DATE       GOOD'S NAME     GROUP         QTY      RATE");
	x=1;
	 y=4;
	  gotoxy(x,y);
	   cprintf("----------------------------------------------------------------------");
	printf("\n");

	file=fopen("c:\\inventory.txt","r");

	if(file ==  NULL ){
		x=250;
		 y=250;
		  gotoxy(x,y);
		   textcolor(RED);
		    cprintf("File not Found...");
		     delay(1500);

	}else{
		  while(!feof(file)){
		    fscanf(file,"%s %s %s %s %d %d",s,d,n,g,&q,&r);
		      if(feof(file)){
			 break;
			}
				x=1;
				 y=y+1;
				  gotoxy(x,y);
				   printf("%s",s);
				x=12;
				 y=y;
				  gotoxy(x,y);
				   printf("%s",d);
				x=24;
				 y=y;
				  gotoxy(x,y);
				   printf("%s",n);
				x=40;
				 y=y;
				  gotoxy(x,y);
				   printf("%s",g);
				x=54;
				 y=y;
				  gotoxy(x,y);
				   printf("%d",q);
				x=63;
				 y=y;
				  gotoxy(x,y);
				   printf("%d",r);
		  }//end of while
	fclose(file);
	}//else
}

void update(){
	system("cls");
	int rt;

	x=25;
	 y=1;
	  gotoxy(x,y);
	   textcolor(YELLOW);
	    cprintf("Departmental Sotore");

	x=63;
	 y=y;
	  gotoxy(x,y);
	   struct date today;
	    getdate(&today);
	      cprintf("%d/%d/%d",today.da_day,today.da_mon,today.da_year);

	x=1;
	 y=2;
	  gotoxy(x,y);
	   cprintf("----------------------------------------------------------------------");

	x=1;
	 y=3;
	  gotoxy(x,y);
	   cprintf("SALE NO.    DATE       GOOD'S NAME     GROUP         QTY      RATE");

	x=1;
	 y=4;
	  gotoxy(x,y);
	   cprintf("----------------------------------------------------------------------");

	printf("\n");

	scanf("%s",search);

	file=fopen("c:\\inventory.txt","r");

	if(file == NULL){
		x=250;
		 y=250;
		  gotoxy(x,y);
		   textcolor(RED);
		    cprintf("Item not Found...");
		     delay(1500);
		}else{
		   while(!feof(file)){
		      fscanf(file,"%s %s %s %s %d %d",s,d,n,g,&q,&r);
			if(feof(file)){
				break;
				}
			if(strcmp(s,search)==0){
				flag=1;
				break;
				}
			}//while

	fclose(file);

	if(flag==1){
		file=fopen("c:\\inventory.txt","r");
		temp=fopen("c:\\temp.txt","a");

			while(!feof(file)){
			fscanf(file,"%s %s %s %s %d %d",s,d,n,g,&q,&r);
				if(feof(file)){
					break;
					}
			      if(strcmp(s,search)==0){
				x=1;
				 y=y+1;
				  gotoxy(x,y);
				   printf("%s",s);
				  x=12;
				y=y;
			       gotoxy(x,y);
			      printf("%s",d);
			       x=24;
				y=y;
				 gotoxy(x,y);
				printf("%s",n);
			       x=40;
			      y=y;
			     gotoxy(x,y);
			    printf("%s",g);
			     x=54;
			      y=y;
			       gotoxy(x,y);
			      printf("%d",q);
			       x=63;
				y=y;
				 gotoxy(x,y);
				  scanf("%d",&rt);
	fprintf(temp,"%s\t%s\t%s\t\t%s\t\t%d\t\t%d\n",s,d,n,g,q,rt);
				}else
	fprintf(temp,"%s\t%s\t%s\t\t%s\t\t%d\t\t%d\n",s,d,n,g,q,r);
			}//while
	fclose(temp);
	fclose(file);

	file=fopen("c:\\inventory.txt","w");
	fclose(file);

	file=fopen("c:\\inventory.txt","a");
	temp=fopen("c:\\temp.txt","r");

	while(!feof(temp)){
			fscanf(temp,"%s %s %s %s %d %d",s,d,n,g,&q,&r);
		if(feof(temp)){
		break;
		}
	fprintf(file,"%s\t%s\t%s\t\t%s\t\t%d\t\t%d\n",s,d,n,g,q,r);
	}//while
	 fclose(temp);
	  fclose(file);
	   temp=fopen("c:\\temp.txt","w");
	   fclose(temp);
	    printf("\n\n\n\n\t\t\t\tfile updated");
	    }
	}//else

}//update
void delate(){
	system("cls");

	x=25;
	 y=1;
	  gotoxy(x,y);
	   textcolor(YELLOW);
	    cprintf("Departmental Sotore");

	x=63;
	 y=y;
	  gotoxy(x,y);
	   struct date today;
	    getdate(&today);
	      cprintf("%d/%d/%d",today.da_day,today.da_mon,today.da_year);

	x=1;
	 y=2;
	  gotoxy(x,y);
	   cprintf("----------------------------------------------------------------------");

	x=1;
	 y=3;
	  gotoxy(x,y);
	   cprintf("SALE NO.    DATE       GOOD'S NAME     GROUP         QTY      RATE");

	x=1;
	 y=4;
	  gotoxy(x,y);
	   cprintf("----------------------------------------------------------------------");

	printf("\n");

	scanf("%s",search);

	file=fopen("c:\\inventory.txt","r");

	if(file == NULL){
		x=250;
		 y=250;
		  gotoxy(x,y);
		   textcolor(RED);
		    cprintf("Item not Found...");
		     delay(1500);
		}else{
		   while(!feof(file)){
		      fscanf(file,"%s %s %s %s %d %d",s,d,n,g,&q,&r);
			if(feof(file)){
				break;
				}
			if(strcmp(s,search)==0){
				flag=1;
				break;
				}
			}//while

	fclose(file);

	if(flag==1){
		file=fopen("c:\\inventory.txt","r");
		temp=fopen("c:\\temp.txt","a");

			while(!feof(file)){
			fscanf(file,"%s %s %s %s %d %d",s,d,n,g,&q,&r);
				if(feof(file)){
					break;
					}
			      if(strcmp(s,search)==0){
				x=1;
				 y=y+1;
				  gotoxy(x,y);
				   printf("%s",s);
				  x=12;
				y=y;
			       gotoxy(x,y);
			      printf("%s",d);
			       x=24;
				y=y;
				 gotoxy(x,y);
				printf("%s",n);
			       x=40;
			      y=y;
			     gotoxy(x,y);
			    printf("%s",g);
			     x=54;
			      y=y;
			       gotoxy(x,y);
			      printf("%d",q);
			       x=63;
				y=y;
				 gotoxy(x,y);
				  printf("%d",r);
				}else
	fprintf(temp,"%s\t%s\t%s\t\t%s\t\t%d\t\t%d\n",s,d,n,g,q,r);
			}//while
	fclose(temp);
	fclose(file);

	file=fopen("c:\\inventory.txt","w");
	fclose(file);

	file=fopen("c:\\inventory.txt","a");
	temp=fopen("c:\\temp.txt","r");

	while(!feof(temp)){
			fscanf(temp,"%s %s %s %s %d %d",s,d,n,g,&q,&r);
		if(feof(temp)){
		break;
		}
	fprintf(file,"%s\t%s\t%s\t\t%s\t\t%d\t\t%d\n",s,d,n,g,q,r);
	}//while
	 fclose(temp);
	  fclose(file);
	   temp=fopen("c:\\temp.txt","w");
	   fclose(temp);
	    printf("\n\n\n\n\t\t\t\tfile deleted");
	    }
	}//else

}//update


void search_by_id(){
	system("cls");

	x=25;
	 y=1;
	  gotoxy(x,y);
	   textcolor(YELLOW);
	    cprintf("D & F Departmental Store");
	x=63;
	 y=y;
	  gotoxy(x,y);
	   struct date today;
	    getdate(&today);
	     cprintf("%d/%d/%d",today.da_day,today.da_mon,today.da_year);

	x=1;
	 y=2;
	  gotoxy(x,y);
	   cprintf("----------------------------------------------------------------------");
	x=1;
	 y=3;
	  gotoxy(x,y);
	   cprintf("SALE NO.    DATE       GOOD'S NAME     GROUP         QTY      RATE");
	x=1;
	 y=4;
	  gotoxy(x,y);
	   cprintf("----------------------------------------------------------------------");
	printf("\n");

	scanf("%s",search);

	file=fopen("c:\\inventory.txt","r");

	if(file ==  NULL ){
		x=250;
		 y=250;
		  gotoxy(x,y);
		   textcolor(RED);
		    cprintf("File not Found...");
		     delay(1500);

	}else{
		  while(!feof(file)){
		    fscanf(file,"%s %s %s %s %d %d",s,d,n,g,&q,&r);
		      if(feof(file)){
			 break;
			}
			if(strcmp(s,search)==0){
				x=1;
				 y=y+1;
				  gotoxy(x,y);
				   printf("%s",s);
				x=12;
				 y=y;
				  gotoxy(x,y);
				   printf("%s",d);
				x=24;
				 y=y;
				  gotoxy(x,y);
				   printf("%s",n);
				x=40;
				 y=y;
				  gotoxy(x,y);
				   printf("%s",g);
				x=54;
				 y=y;
				  gotoxy(x,y);
				   printf("%d",q);
				x=63;
				 y=y;
				  gotoxy(x,y);
				   printf("%d",r);
				  }//if
		  }//end of while
		  fclose(file);
	}//else
}

void search_by_group(){
	system("cls");

	x=25;
	 y=1;
	  gotoxy(x,y);
	   textcolor(YELLOW);
	    cprintf("D & F Departmental Store");
	x=63;
	 y=y;
	  gotoxy(x,y);
	   struct date today;
	    getdate(&today);
	     cprintf("%d/%d/%d",today.da_day,today.da_mon,today.da_year);

	x=1;
	 y=2;
	  gotoxy(x,y);
	   cprintf("----------------------------------------------------------------------");
	x=1;
	 y=3;
	  gotoxy(x,y);
	 cprintf("GROUP        DATE        GOOD'S NAME     SELL NO.      QTY     RATE");
	x=1;
	 y=4;
	  gotoxy(x,y);
	   cprintf("----------------------------------------------------------------------");
	printf("\n");

	scanf("%s",search);

	file=fopen("c:\\inventory.txt","r");

	if(file ==  NULL ){
		x=250;
		 y=250;
		  gotoxy(x,y);
		   textcolor(RED);
		    cprintf("File not Found...");
		     delay(1500);

	}else{
		  while(!feof(file)){
		    fscanf(file,"%s %s %s %s %d %d",s,d,n,g,&q,&r);
		      if(feof(file)){
			 break;
			}
			if(strcmp(g,search)==0){
				x=1;
				 y=y+1;
				  gotoxy(x,y);
				   printf("%s",g);
				x=14;
				 y=y;
				  gotoxy(x,y);
				   printf("%s",d);
				x=26;
				 y=y;
				  gotoxy(x,y);
				   printf("%s",n);
				x=42;
				 y=y;
				  gotoxy(x,y);
				   printf("%s",s);
				x=56;
				 y=y;
				  gotoxy(x,y);
				   printf("%d",q);
				x=63;
				 y=y;
				  gotoxy(x,y);
				   printf("%d",r);
				  }//if
		  }//end of while
		  fclose(file);
	}//else
}
void sale(){
	system("cls");
	int dis,m,x,y,qt,k=0,amount=0;
	int dinesh=0;
	char ch;
	char search[20];
	char s[20];
	char g[20];
	char n[20];
	char d[20];
	int q,r,vat,paisa;


	x=25;
	 y=1;
	  gotoxy(x,y);
	   textcolor(YELLOW);
	    cprintf("Departmental Sotore");

	x=63;
	 y=y;
	  gotoxy(x,y);
	   struct date today;
	    getdate(&today);
	      cprintf("%d/%d/%d",today.da_day,today.da_mon,today.da_year);

	x=1;
	 y=2;
	  gotoxy(x,y);
	   cprintf("----------------------------------------------------------------------");

	x=1;
	 y=3;

	  gotoxy(x,y);
	   cprintf("SALE NO.    GOOD'S NAME     GROUP        QTY    RATE    DIS   AMOUNT");

	x=1;
	 y=4;
	  gotoxy(x,y);
	   cprintf("----------------------------------------------------------------------");

	printf("\n");


	  while(1){
			file=fopen("c:\\inventory.txt","r");
			temp=fopen("c:\\temp.txt","a");
			ch=getch();
			if(ch==27){
			break;
			}
		scanf("%s",search);
			while(!feof(file)){
				fscanf(file,"%s %s %s %s %d %d",s,d,n,g,&q,&r);
				if(feof(file)){
					break;
				}
					if(strcmp(s,search)==0){
						x=1;
						y=y+1;
						gotoxy(x,y);
						printf("%s",s);
						x=13;
						y=y;
						gotoxy(x,y);
						printf("%s",n);
						x=29;
						y=y;
						gotoxy(x,y);
						printf("%s",g);
						x=42;
						y=y;
						gotoxy(x,y);
						scanf("%d",&qt);
						m=q-qt;
						x=49;
						y=y;
						gotoxy(x,y);
						printf("%d",r);
						x=57;
						y=y;
						gotoxy(x,y);
						scanf("%d",&dis);
						k=(r*qt*dis)/100;
						amount=(r*qt)-k;
						x=63;
						y=y;
						gotoxy(x,y);
						printf("%d\n",amount);
						dinesh=dinesh+amount;

						fprintf(temp,"%s\t %s\t %s\t %s\t %d\t %d\n",s,d,n,g,m,r);
					}else
						fprintf(temp,"%s\t %s\t %s\t %s\t %d\t %d\n",s,d,n,g,q,r);
			}//while;

					fclose(temp);

					fclose(file);

					file=fopen("c:\\inventory.txt","w");
					fclose(file);
					file=fopen("c:\\inventory.txt","a");
					temp=fopen("c:\\temp.txt","r");

					while(!feof(temp)){
						fscanf(temp,"%s %s %s %s %d %d",s,d,n,g,&q,&r);
							if(feof(temp)){
								break;
							}
						fprintf(file,"%s\t%s\t%s\t%s\t%d\t%d\n",s,d,n,g,q,r);
					}//while
					fclose(file);
					fclose(temp);
					temp=fopen("c:\\temp.txt","w");
					fclose(temp);
	  }//while

	 printf("\n\n----------------------------------------------------------------------");
	vat=(0.13*dinesh);
	paisa=dinesh+vat;
	printf("\n\t\t\t\t\t\t     VAT 13%%=Rs %d",vat);
	printf("\n\t\t\t\t\t\tTotal amount=Rs %d",paisa);
	printf("\n----------------------------------------------------------------------");
}//sale

