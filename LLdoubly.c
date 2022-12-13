#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
    struct node * prev;
};
typedef struct node node;

node * create_ll(node*);
node * display(node*);
node * start = NULL;

int main(){
    int choice;
    do{
        printf("\nEnter the option of your choice \n");
        printf("\n1.Create LL\n2.Display\n3.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            start = create_ll(start);
            break;

            case 2:
            start = display(start);
            break;

            case 3:
            break;
   
            default: 
            printf("invalid choice !\n");
        }
    }while(choice != 3);
    return 0;
}

node * create_ll(node* start){
    node * new_node;
    node * ptr;
    int val;
    printf("Enter data to insert or -1 to end !\n");
    scanf("%d",&val);
    while(val!=-1){
        
        if(start == NULL){
            new_node= (node*)malloc(sizeof(node));
            new_node->prev = NULL;
            new_node->next = NULL;
            new_node->data = val;
            start = new_node;  

        }
        else{
            new_node = (node*)malloc(sizeof(node));
            ptr =start;
            new_node->data = val;
            while(ptr->next!=NULL){
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->prev = ptr;
            new_node->next = NULL;
            
            

        }
        printf("Enter data to insert or -1 to end !\n");
        scanf("%d",&val);
    }
    return start;
}

node * display(node* start){
    node* ptr=start;
    while(ptr != NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
    return start;
}
