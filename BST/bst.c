#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
}node;

struct node *root = NULL;
void insert();
void delete();
void display();
void inorder(struct node *);
int main(){

	int ch;
	while(1){
		printf("BST operations\n");
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("2.Inorder Tree Traversal\n");
		printf("3.Exit\n\n");
		scanf("%d", &ch);

		switch(ch){
			case 1 : insert(); break;
			case 2 : display(); break;
			case 3 : exit(0);
		}
	}
}

void insert(){

	struct node *temp, *p;
	temp = (struct node *)malloc(sizeof(struct node));
	printf("Enter the data\n");
	scanf("%d",&temp->data);
	temp->right = NULL;
	temp->left = NULL;
	if(root == NULL){
		root = temp;

	}
	else{
		struct node *curr = root,*p = root;

		while(curr){
			p =curr;
			if(temp->data > curr->data){
				curr = curr->right;
			}
			else{
				curr = curr->left;
			}
		}
		if(temp->data > p->data){
			p->right  = temp;
		}
		else{
			p->left = temp;
		}
	}
}
void display(){
	if(root == NULL)
		printf("Tree empty\n");
	else{
		inorder(root);
	}
}
void delete(){
	if(root == NULL){
		printf("empty tree\n");
	}
	else{
		int ele;
		struct node *curr = root, *p;
		printf("Enter an element to delete\n");
		scanf("%d", &ele);
		//If the element is the root
		if(curr->data =ele){

		}
	}
}
void inorder(struct node* root) {
  if (root == NULL) return;
  inorder(root->left);
  printf("%d ->", root->data);
  inorder(root->right);
}