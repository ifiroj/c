#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
int main(){
       clrscr();
       int i;
       char a[100]="i'm so rich";

       for(i=0;i<=strlen(a);i++){
       printf("%c",a[i]);
       delay(250);}

getch();
return 0;
}