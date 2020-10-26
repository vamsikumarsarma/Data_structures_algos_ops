#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node * next;
};

void push(struct node **, int);
void print(struct node *);
void pairswap(struct node **);

int main(){
	struct node *head = NULL;
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);

	for(int i=n-1;i >=0;i--)
		push(&head, arr[i]);
	printf("Elements before pair swap\n");
	print(head);
	pairswap(&head);
	printf("elements after swap\n");
	print(head);
	return 0;
}


void pairswap(struct node **head){

	if(*head == NULL || (*head)->next == NULL){
		printf("list empty or contains one node\n");
		return;
	}
	struct node *curr = *head, *prev = NULL;
	while(curr != NULL && curr->next != NULL){
		struct node* temp =curr->next;
		curr->next = temp->next;
		temp->next = curr;

		if(prev ==NULL){
			*head = temp;
		}
		else{
			prev->next = temp;  
		}
		prev = curr;
		curr = curr->next;
	}
}
void push(struct node **head, int ele){

	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = ele;
	temp->next = *head;
	*head = temp;

}

void print(struct node *head){
	if(head == NULL){
		printf("List is empty\n");
	}
	else{
		struct node *p = head;
		while(p){
			printf("%d->", p->data);
			p = p->next;
		}
	}
}

