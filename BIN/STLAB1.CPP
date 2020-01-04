#include<stdio.h>
#include<conio.h>

struct complex{
      int real;
      int img;
};

struct complex add(struct complex, struct complex);
struct complex sub(struct complex, struct complex);

int main(){
       clrscr();

       struct complex c1,c2,c3;
       printf("\nEnter the value of first real number and imaginary number : ");
       scanf("%d%d",&c1.real,&c1.img);

       printf("\nEnter the value of second real and imaginary number : ");
       scanf("%d%d",&c2.real,&c2.img);

      c3=add(c1,c2);
printf("\nThe sum of %d+i%d & %d+i%d is : %d+i%d",c1.real,c1.img,c2.real,c2.img,c3.real,c3.img);

      c3=sub(c1,c2);
printf("\nThe difference of %d+i%d & %d+i%d is : %d-i%d",c1.real,c1.img,c2.real,c2.img,c3.real,c3.img);

       getch();
       return 0;
}

struct complex add(struct complex a, struct complex b){
	struct complex temp;

	temp.real = a.real+b.real;
	temp.img = a.img+b.img;
	return temp;
}

struct complex sub(struct complex c, struct complex d){
	struct complex temp1;

	temp1.real = c.real-d.real;
	temp1.img = c.img-d.img;
	return temp1;
}