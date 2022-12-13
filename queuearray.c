#include<stdio.h>
#include<stdlib.h>
#define max 20
int queue[max], front=-1,rear=-1;
void insert();
int delete_element();
int peek();
void display();

int main(){
    int choice, val;
    do{
        printf("\nEnter a choice :\n1. Insert an element\n2. Delete an element\n3. Peek into the queue\n4. Display\n5. Exit\n ->");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            insert();
            break;

            case 2:
            val = delete_element();
            if(val!=-1)
            printf("deleting the number %d ", val);
            break;

            case 3:
            val =peek();
            if(val !=-1){
                printf("the number at the front of the queue is : %d", val);
            }
            break;

            case 4:
            display();
            break;
            
            default :
            printf("Invalid choice !");
            break;
        }
    }while(choice!=5);
    return 0;
}
void insert(){
    int num;
    printf("Enter the number to be inserted into the queue: \n");
    scanf("%d", &num);
    if(rear==max-1)
    printf("overflow !");
    else if(front ==-1 && rear ==-1){
        front = rear= 0;
    }
    else {
        rear++;
    }
    queue[rear]=num;
}
int delete_element(){
    int val;
    if(front == -1 || front >rear){
        printf("Underflow !");
        return -1;
    }
    else{
        val = queue[front];
        front++;
        if(front >rear)
        front = rear -1;
        return val;
    }
}
int peek(){
    if(front == -1 || front >rear ){
        printf("queue is empty ");
        return -1;
    }
    else {
        return queue[front];
    }
}
void display(){
    int i;
    printf("\n");
    if(front ==-1 || front >rear)
    printf("queue is empty");
    else{
        for(i = front;i<=rear;i++)
        printf("\t %d", queue[i]);
    }
}