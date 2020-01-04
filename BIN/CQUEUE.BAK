#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10

struct circularQueue{

  int front,rear,data[size];

};

void enqueue(struct circularQueue * cq){
	if((cq->rear+1)%size==cq->front)
		printf("Queue is full");
	else{
		cq->rear=(cq->rear+1)%size;
		printf("enter data to enqueue");
		scanf("%d",&cq->data[cq->rear]);
	}
}

void dequeue(struct circularQueue * cq){
	if(cq->rear==cq->front)
		printf("circular queue is empty");
	else{
		cq->front=(cq->front+1)%size;
		printf("%d is dequeued",cq->data[cq->front]);
	}
}

void view(struct circularQueue cq){
	if(cq.rear==cq.front)
		printf("Queue is empty");
	else{
		for(int i=cq.front;i!=cq.rear;i=(i+1)%size)
			printf("%d ",cq.data[(i+1)%size]);
	}
}

int main(){
	clrscr();

	int choice;

	circularQueue cq;
	cq.front=0;
	cq.rear=0;

	while(1){

		printf("\nSelect an option : \n");
		printf("1. Enqueue\n");
		printf("2. Dequeue\n");
		printf("3. View\n");
		printf("4. Exit\n");
		scanf("%d",&choice);

		switch(choice){
			case 1: clrscr();
				enqueue(&cq);
				break;

			case 2: clrscr();
				dequeue(&cq);
				break;

			case 3: clrscr();
				view(cq);
				break;

			case 4:
				exit(0);

			default: clrscr();
				 printf("invalid option");
				 break;
		}
	}
	getch();
	return 0;
}