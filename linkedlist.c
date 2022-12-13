#include<stdio.h>
#include<stdlib.h>
int value;
struct node{
    int data;
    struct node *next;
};

struct node* start=NULL,new_node;
//struct node* createList(struct node*);
void display(struct node*);
struct node* in_start(struct node*,int);



int main(){
    int choice=0;
    while(choice!=-1){
        printf("Choose your operation:\n1. Insert in linked list\n2. Display linked list\n3. Exit");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter a value to insert in linked list: \n");
            scanf("%d",&value);
            in_start(start,value);
            break;

            case 2:
            display(start);
            break;

            case 3:
            choice=-1;
            break;

            default:
            printf("\nInvalid choice");
        }
    }
    return 0;
}

struct node* in_start(struct node* start, int value){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = start;
    start = new_node;
}

void display(struct node* start){
    if(start==NULL){
        printf("Underflow !");
    }
    while(start!=NULL){
        printf("%d",start->data);
        start=start->next;
    }
}

/*struct Node * insert_index(struct Node * start,){

}*/