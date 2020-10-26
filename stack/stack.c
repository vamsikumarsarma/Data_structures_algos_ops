#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int top = -1;
int stack[MAX];

void push();
void pop();
void peek();
void display();
int isfull();
int isempty();

int main(){

	int ch;
	while(1){
		printf("Stack operations\n");
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.peek\n");
		printf("4.Display\n");
		printf("5.Exit\n");
		scanf("%d", &ch);

		switch(ch){

			case 1 : push(); break;

			case 2 : pop(); break;

			case 3 : peek(); break;

			case 4 : display(); break;

			case 5 : exit(-1); break;

		}
	}
}
int isfull(){

	if(top ==  MAX-1){
		return 1;
	}
	return 0;
}

int isempty(){

	if(top == -1){
		return 1;
	}
	return 0;
}
void push(){

	if(isfull()){
		printf("stack is full cannot push any element\n");
	}
	else{
		top++;
		printf("Enter element to push into stack\n");
		scanf("%d", &stack[top]);
	}
}
void pop(){

	if(isempty()){
		printf("stack is empty nothing to pop\n");
	}
	else{
		printf("pop'ed element is %d\n",stack[top]);
		top--;
	}
}

void peek(){
	if(isempty()){
		printf("stack is empty nothing to pop\n");	
	}
	else{
		printf("top element is %d\n",stack[top]);
	}
}

void display(){
	if(isempty()){
		printf("stack is empty nothing to pop\n");	
	}
	else{
		printf("\n Elements in the stack are:\n");
		int i;
		for(i= top;i>=0;i--){
			printf("%d\n",stack[i]);
		}
		printf("\n\n");
	}
}