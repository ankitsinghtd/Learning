#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
typedef struct Node Node;

void display(Node *ptr){
    while(ptr!=NULL){
        printf("\n%d",ptr->data);
        ptr = ptr->next;
    }
}

Node * insert_begin(Node* first, int data){
    Node* ptr = (Node*)malloc(sizeof(Node));
    ptr->next=first;
    ptr->data=data;
    return ptr;
}

void main(){

    Node* first=(Node*)malloc(sizeof(Node));
    Node* second=(Node*)malloc(sizeof(Node));
    Node* third=(Node*)malloc(sizeof(Node));

    first->data=123;
    first->next = second;

    second->next=third;
    second->data=216;

    third->data=49;
    third->next= NULL;

    display(first);
    printf("\n\n");
    first=insert_begin(first, 69);
    display(first);
    printf("\n\n");
    first=insert_begin(first,500);
    display(first);
}