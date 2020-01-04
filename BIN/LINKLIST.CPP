#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct linklist{
	int info;
	struct linklist *next;
}node;

struct linklist * getNode(){
	struct linklist * newptr;
	newptr = (struct linklist *)malloc(sizeof(struct linklist));
	newptr->next = NULL;
	return newptr;
}

struct linklist * createNode(struct linklist * head,int val){
	struct linklist * newptr, *ptr;
	newptr = getNode();
	newptr->info=val;

	if(head==NULL)
		head = newptr;
	else{
		ptr = head;
		while(ptr->next!=NULL){
			ptr = ptr->next;
		}
		ptr->next = newptr;
	}
	return head;
}

void traverse(struct linklist *head){
	struct linklist * ptr;
	ptr = head;
	while(ptr!=NULL){
		printf("%d ",ptr->info);
		ptr = ptr->next;
	}
}

int main(){
	clrscr();

	struct linklist * head = NULL;
	head = createNode(head,3);
	head = createNode(head,5);
	head = createNode(head,8);
	head = createNode(head,1);
	traverse(head);

	getch();
	return 0;
}