#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;

};
typedef struct node node;
node* start =NULL;
node* create_ll(node*);
node* display(node*);
node* insert_beg(node*);
node* insert_end(node*);
node* insert_before(node*);
node* insert_after(node*);
node* delete_beg(node*);
node* delete_end(node*);
node* delete_node(node*);
node* delete_after(node*);
node* delete_list(node*);
node *sort_list(node*);

int main(){
    int choice;
    do{
        printf("\n Choose operation of your choice: ");
        printf("\n\n 1: Create a list");
        printf("\n 2: Display the list");
        printf("\n 3: Add a node at the beginning");
        printf("\n 4: Add a node at the end");
        printf("\n 5: Add a node before a given node");
        printf("\n 6: Add a node after a given node");
        printf("\n 7: Delete a node from the beginning");
        printf("\n 8: Delete a node from the end");
        printf("\n 9: Delete a node after a given node");
        printf("\n 10: Delete the entire list");
        printf("\n 11: Sort the list");
        printf("\n 12: Exit");
        scanf("%d", &choice);
        switch(choice){
            case 1: start = create_ll(start);
            printf("\n LINKED LIST CREATED !");
            break;

            case 2: start =display(start);
            break;

            case 3: start = insert_beg(start);
            break;

            case 4: start = insert_end(start);
            break;

            case 5: start=insert_before(start);
            break;

            case 6: start=insert_after(start);
            break;

            case 7: start =delete_beg(start);
            break;

            case 8: start = delete_end(start);
            break;
            
            /*case 9: start= delete_after(start);
            break;

            case 10: start = delete_list(start);
            break;

            case 11: start= sort_list(start);
            break;*/

            default: printf("Invalid Choice !");
            break;
        }
    }while(choice!=13);
    return 0;
}
node * create_ll(node *start){
    node* new_node, *ptr;
    int num;
    printf("\nEnter data (enter -1 to end)");
    scanf("%d", &num);
    while(num!=-1){
        new_node=(node*)malloc(sizeof(node));
        new_node->data=num;
        if(start==NULL){
            new_node->next = NULL;
            start= new_node;
        }
        else{
            ptr=start;
            while(ptr->next!=NULL)
            ptr=ptr->next;
            ptr->next=new_node;
            new_node->next=NULL;
        }
        printf("\nEnter the data: ");
        scanf("%d", &num);
    }
    return start;
}
node *display(node*start){
    node * ptr=start;
    while(ptr!=NULL){
        printf("\t %d",ptr->data);
        ptr=ptr->next;
    }
    return start;
}
node * insert_beg(node*start){
    struct node* new_node;
    int num;
    printf("\n Enter the data: ");
    scanf("%d",&num);
    new_node=(node*)malloc(sizeof(node));
    new_node->data=num;
    new_node->next=start;
    start=new_node;
    return start;
}
node* insert_end(node*start){
    node*ptr, *new_node;
    int num;
    printf("\n Enter the data:");
    scanf("%d", &num);
    new_node=(node*)malloc(sizeof(node));
    new_node->data=num;
    new_node->next=NULL;
    ptr=start;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=new_node;
    return start;
}
node* insert_before(node* start){
    node* new_node, *ptr, *preptr;
    int num, val;
    printf("\nEnter the data");
    scanf("%d", &num);
    printf("\n Enter the value before which data is to be inserted");
    scanf("%d",&val);
    new_node=(node*)malloc(sizeof(node));
    new_node->data=num;
    ptr=start;
    while(ptr->data!=val){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=new_node;
    new_node->next=ptr;
    return start;
}
node* delete_beg(node * start){
    node * ptr;
    ptr =start;
    start = start->next;
    printf("Deleting %d", ptr->data);
    free(ptr);
    return start;
}
node * delete_end(node * start){
    node * preptr, *ptr;
    ptr = start;
    while(ptr->next!=NULL){
        preptr = ptr;
        ptr=ptr->next;
    }
    preptr->next = NULL;
    free(ptr);
    return start;
}
node * insert_after(node * start){
    node *ptr=start,*postptr, *new_node = (node *)malloc(sizeof(node));
    int val;
    printf("Enter the node after which data is to be inserted :\n->");
    scanf("%d",&val);
    while(ptr->data!=val){
        ptr=ptr->next;
    }
    postptr=ptr->next;
    ptr->next=new_node;
    printf("Enter data to be inserted after that node : \n->");
    scanf("%d", &new_node->data);
    new_node->next=postptr;
    
}
struct node *delete_after(struct node *start)
{
    struct node *ptr, *preptr;
    int val;
    printf("\n Enter the value after which the node has to deleted : ");
    scanf("%d", &val);
    ptr = start;
    preptr = ptr;
    while(preptr -> data != val)
    {
        preptr = ptr;
        ptr = ptr -> next;
    }
    preptr -> next=ptr -> next;
    free(ptr);
    return start;
}
struct node *delete_list(struct node *start)
{
	struct node *ptr;
    if(start!=NULL){
    ptr=start;
    while(ptr != NULL)
    {
    printf("\n %d is to be deleted next", ptr -> data);
    start = delete_beg(ptr);
    ptr = start;
    }
}
return start;
}