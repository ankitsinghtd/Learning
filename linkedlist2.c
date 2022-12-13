#include<stdio.h>
#include<stdlib.h>

struct node * insert_beg(struct node * start);
void display(struct node * start);
struct node * delete_end(struct node * start);

struct node{
    int data;
    struct node * next;
};
struct node * start = NULL;
void main(){
    int choice;
    do{
        printf("\nChoose the operation of your choice !\n");
        printf("1.Insert an element in beginning\n2.Delete element from last\n3.Display\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            start = insert_beg(start);
            break;

            case 2:
            start = delete_end(start);
            break;

            case 3:
            display(start);
            break;

            case 4:
            break;

            default:
            printf("invalid choice !");
            break;
        }
    }while(choice!=4);
}
struct node * insert_beg(struct node * start){
    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    int val;
    printf("\nEnter data to insert: \n");
    scanf("%d",&val);
    if(start == NULL){
        new_node->data = val;
        new_node->next = NULL;
        start = new_node;
    }
    else{
        new_node->next = start;
        new_node->data = val;
        start = new_node;
    }
    return start;
}
void display(struct node * start){
    struct node * ptr = start;
    if(ptr == NULL){
        printf("empty list");
    }
    else {
        while(ptr != NULL){
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
}
struct node * delete_end(struct node * start){
    struct node * ptr=start;
    while(ptr->next->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next = NULL;
    return start;
}