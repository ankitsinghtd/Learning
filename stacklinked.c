#include<stdio.h>
#include<stdlib.h>

struct stack{
    int data;
    struct stack*next;
};
typedef struct stack stack;

stack * top=NULL;
stack * push(stack* , int);
stack * display(stack*);
stack * pop(stack*);
int peek(stack*);

int main(){
    int val, choice;
    do{
        printf("\nEnter a choice: \n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit \n->");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            printf("\nEnter the no to push into stack :\n");
            scanf("%d", &val);
            top=push(top, val);
            break;

            case 2:
            top=pop(top);
            break;

            case 3:
            val=peek(top);
            if(val!=-1){
                printf("\nThe value at the top of the stack is : %d", val);

            }
            else{
                printf("Stack is empty");
            }
            break;

            case 4:
            top=display(top);
            break;

            defualt:
            printf("Invalid Choice !");
        }

    }while(choice!=5);  
    return 0;
}
stack * push(stack * top, int val){
    stack * ptr=(stack*)malloc(sizeof(stack));
    ptr->data =val;
    if(top==NULL){
        ptr->next=NULL;
        top=ptr;
    }
    else{
        ptr->next =top;
        top=ptr;
    }
    return top;
}
stack *display(stack* top){
    stack * ptr;
    ptr =top;
    if(top ==NULL){
        printf("Stack is empty");
    
    }
    else{
        while(ptr != NULL){
            printf("\n%d", ptr->data);
            ptr = ptr->next;
        }
    }
    return top;
}
stack * pop(stack * top){
    stack * ptr;
    ptr =top;
    if(top==NULL){
        printf("Stack overflow !");

    }
    else{
        top = top->next;
        printf("The value being deleted is : %d", ptr->data);
    }
    return top;
}
int peek(stack *top){
    if(top==NULL){
        return -1;
    }
    else {
        return top->data;
    }
}