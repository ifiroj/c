#include<stdio.h>
#include<conio.h>
int main(){
	system("cls");
	char alpha;

	printf("enter any character : ");
	scanf("%c",&alpha);

	if(alpha>='a' && alpha<='z')
	printf("its lower case");

	else if(alpha>='A' && alpha<='Z')
	printf("its uper case");

	else
	printf("its neither lowercase nor upercase");

	getch();
	return 0;

}