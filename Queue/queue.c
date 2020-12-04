#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int q[MAX];
int front =0;
int rear = 0;
//insert at rear
//pop at front
int isfull();
int isempty();
void push();
void pop();
void display();

int main(){

	int ch;
	while(1){
		printf("queue operations\n");
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.Display\n");
		printf("4.Exit\n");
		scanf("%d", &ch);

		switch(ch){

			case 1 : push(); break;

			case 2 : pop(); break;

			case 3 : display(); break;

			case 4 : exit(-1); break;

		}
	}

	return 0;
}

int isfull(){

	if(rear == MAX)
		return 1;
	return 0;
}
int isempty(){
	if (front == rear){
		return 1;
	}
	return 0;
}
void push(){

	if(isfull()){
		printf("Queue is full\n");
	}
	else{
		int ele;
		printf("Enter an element\n");
		scanf("%d", &ele);
		q[rear] = ele;
		rear++;

	}
}
void pop(){
	if(isempty()){
		printf("Queue is empty\n");
	}{
		printf("poped item is %d\n", q[front]);
	}
	int i;
	for(i = 0;i < rear;i++){
		q[i] = q[i+1];
	}
	rear--;
}
void display(){
	if (isempty()){
		printf("Queue is empty\n");
	}
	else{
		printf("queue elements are\n");
		int i;
		for(i = front; i<rear;i++){
			printf("%d\n",q[i]);
		}
	}
}