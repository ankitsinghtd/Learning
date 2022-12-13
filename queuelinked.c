#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node*next;
};
typedef struct node node;

struct queue{
    struct node* front;
    struct node* rear;
};

// struct queue* q;
void create_queue(struct queue*);
void insert(struct queue*, int);
struct queue* delete_element(struct queue*);
struct queue* display(struct queue*);
int peek(struct queue*);

int main(){
    int val, choice;
    struct queue * q;
    q->front = q->rear = NULL;
    do{
        printf("\nChoose an operation :\n1. Insert\n2. Delete\n3. Peek\n4. Display\n5. Exit\n->");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            printf("Enter the element to insert: \n");
            scanf("%d", &val);
            insert(q,val);
            break;

            case 2:
            q=delete_element(q);
            break;

            case 3:
            val =peek(q);
            if(val!=-1)
            printf("First number : %d", val);
            break;

            case 4:
            q=display(q);
            break;

            case 5:
            break;

            default:
            printf("Invalid choice !");
            break;
        }
    }while(choice!=5);
    return 0;
}

void insert(struct queue *q, int val){
    node * ptr=(node *)malloc(sizeof(node));
    ptr->data=val;
    if(q->front == NULL){
        q->front = ptr;
        q->rear = ptr;
        q->front->next= q->rear->next = NULL;
    }
    else{
        q->rear->next = ptr;
        q->rear = ptr;
        q->rear->next = NULL;
    }
    
}
struct queue * display(struct queue *q){
    node * ptr;
    ptr = q->front;
    if(ptr == NULL){
        printf("queue is empty !");
    }
    else {
        printf("\n");
        while(ptr!=q->rear){
            printf("%d \t ", ptr->data);
            ptr = ptr->next;
        }
        printf("%d \t ", ptr->data);
    }
    return q;
}
struct queue* delete_element(struct queue *q){
    node* ptr;
    ptr = q->front;
    if(q->front==NULL)
    printf("Underflow !");
    else{
        q->front = q->front->next;
        printf("Deleting  %d", ptr->data);
        free(ptr);

    }
    return q;
}
int peek(struct queue *q){
    if(q->front == NULL ){
        printf("queue is empty !");
        return -1;
    }
    else 
    return q->front->data;
}