#include <stdio.h>
#include <stdlib.h>

typedef struct node{

	int data;
	struct node * next;
}Node;

void push(Node **q,int x);
void reverse(Node **q);
void display(Node *q);
void length(Node *q);

int main(){

	int x = 1234;
	int y = 968;

	Node *l1 = NULL;
	while(x >0){
		push(&l1, x % 10);
		x = x/10;
	}
	Node *l2 = NULL;
	while(y >0){
		push(&l2,y % 10);
		y = y/10;
	}/*
	display(l1);
	length(l1);
	display(l2);
	length(l2);
	*/
	
	reverse(&l1);
	reverse(&l2);
	display(l1);
	return 0;

}

void push(Node **q,int x){
	Node *temp;
	temp = (Node *)malloc(sizeof(Node));
	temp->data = x;
	temp->next = NULL;
	if(*q == NULL){
		*q = temp;
	}
	else{
		Node *p = *q;
		temp->next = *q;
		*q = temp;
	}
}
void reverse(Node **q){
	Node *prev = NULL;
	Node *curr = *q;
	Node *next;

	while(curr){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;

	}
	*q = prev;
}
void display(Node *q){
	if(q == NULL){
		printf("empty\n");
	}
	else{
		while(q){
			printf("%d->",q->data);
			q = q->next;
		}
		printf("NULL\n");
	}
}
void length(Node *q){
	int len =0;
	while(q){
		len++;
		q = q->next;
	}
	printf("\nlength is %d\n",len);
}