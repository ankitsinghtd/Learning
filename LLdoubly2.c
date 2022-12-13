#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
    struct node * prev;
};

struct node * start = NULL;

void main(){
    int choice;
    printf("\nEnter the operation of your choice !\n");
    printf("1.Insert in beginning\n2.Delete from last\n3.Display\n4.Exit\n");
    scanf("%d",&choice);
    do{
        switch(choice){
            case 1:
            break;

            case 2:
            break;

            case 3:
            break;

            case 4:
            break;

            default:
            printf("invalid choice! ");
        }
    }while(choice!=4);
}
struct node* insert_beg