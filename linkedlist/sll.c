#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;
int len =0;
void insert();
void search();
void display();
void delete_at_beg();
void delete_at_pos();
void delete_at_end();
void reverse_iterative();
void reverse_recursive(struct node*);
int length();

int main(){

    int ch;
    while(1){
    printf("\n***Linkedlist operations***\n");
    printf("1.Insert the element\n");
    printf("2.Search an element\n");
    printf("3.Delete at beg\n");
    printf("4.Delete at any pos\n");
    printf("5.Delete at end\n");
    printf("6.Display the list\n");
    printf("7.Length of the list\n");
    printf("8.Reverse linkedlist iteratively\n");
    printf("9.Reverse linkedlist recursively\n");
    printf("10.Exit\n");
    printf("Enter a choice\n");
    scanf("%d",&ch);

        switch(ch){
            case 1 :    /*Insert an element*/
                        insert(); break;
            case 2 :    /*Search for an element*/
                        if(head ==NULL){
                            printf("List is empty\n\n");
                            break;
                        }    
                        else{
                            search(); 
                            break;
                        }   
            case 3 :    /*Delete at beg*/
                       delete_at_beg(); 
                       break;
                         
            case 4 :    /*Delete at any position*/
                        delete_at_pos(); 
                        break;
                                                   
            case 5 :    /*Delete at end*/
                        delete_at_end(); 
                        break;
            case 6 :    /*Display*/
                        if(head ==NULL){
                            printf("List is empty\n\n");
                            break;
                        }    
                        else{
                            display(); 
                            break;
                        }
            case 7 :    /*Length*/
                        if(head ==NULL){
                            printf("List is empty\n\n");
                            break;
                        }    
                        else{
                            len = length(); 
                            printf("the length of list is %d\n",len);
                            break;
                        }
            case 8 :    if(head == NULL){
                            printf("list empty\n");
                         }
                        reverse_iterative();
                         break;
            case 9 :   if(head == NULL){
                            printf("list empty\n");
                         }
                        reverse_recursive(head);
                         break;
            case 10 :    exit(0);
        }
    }
    return 0;
}

void insert(){

    struct node* temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&temp->data);
    temp->next = NULL;
    
    if (head == NULL){
        head = temp;
    }
    else{
        struct node *p;
        p = head;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = temp;
    }
    //free(temp) -- infinite loop in print
}
void search(){

    struct node *temp = head;
    int element;
    printf("Enter the elemnt to be searched\n");
    scanf("%d",&element);
    while(temp){
        if(temp->data == element){
            printf("element found\n");
            return;
        }
        temp = temp->next;
    }
    /*If control reaches here implies element doesnot exist in the list*/
    printf("element not found\n");

}
void display(){

    struct node *temp = head;
    while(temp){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL");
}
void delete_at_beg(){
    if(head == NULL){
    printf("list is empty\n");
    return;
    }
    struct node *temp = head;
    temp = head->next;
    free(head);
    head = temp;
}
void delete_at_pos(){

  if(head == NULL){
    printf("list is empty\n");
    return;
  }
  int len = length();
  int i=0,j=0,pos;
  struct node *temp =head,*q;
  printf("number of nodes in the  list is %d\n",len);
  printf("Enter the position to be deleted..index starts from 1..\n");
  scanf("%d",&pos);
  //corner case
  if(pos > len){
        printf("Entered position is larger than nodes in the lsit..\n");
        return;
  }
  if(pos ==1){
    delete_at_beg();
  }
  else if(pos == len){
    delete_at_end();
  }
  else{
        while(i <pos -1){
            q = temp;
            temp = temp->next;
            i++;
        }
        free(q->next);
        q->next = temp;
  }
}
void delete_at_end(){

    if(head == NULL){
        printf("List empty\n");
        return;
    }
    struct node *temp = head, *q = head;
    while(temp->next != NULL){
        q = temp;
        temp = temp->next;
    }
    q->next = NULL;
    free(temp->next);

}
int length(){

    struct node *temp = head;
    int len =0;
    while(temp){
        len++;
        temp = temp->next;
    }
    return len;
}
void reverse_iterative(){

    struct node *prev,*curr,*next;
   prev = NULL;
   curr = head;
   while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
   }
   head = prev;

}
void reverse_recursive(struct node *p){

    if(p->next ==NULL){
        head = p;
        return;
    }
    reverse_recursive(p->next);
    struct node *q = p->next;
    q->next =p;
    p->next = NULL;

}