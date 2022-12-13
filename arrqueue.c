#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, n,*a, front=-1,rear=-1, max, value,c;
    printf("Enter size of your queue:\n");
    scanf("%d",&n);
    a=(int*)calloc(n,sizeof(int));
    
    while(c!=4){
        printf("\nChoose an operation :\n1. Insert\n2. Delete\n3. Display Queue\n4. Exit\n");
        scanf("%d",&c);
        switch(c){
            case 1:  
            printf("Enter value to insert:\n");
            scanf("%d",&value); 
            if(rear==n-1){
                printf("Overflow !");
                break;
            }
            else if(front ==-1 && rear==-1){
                front=0;
                rear=0;
            }
            else{
                rear=rear+1;
            }
            a[rear]=value;
            break;

            case 2:
            if(front==-1 || front>rear){
                printf("Underflow !");
                break;
            }
            else{
                value=a[front];
                if(front==rear){
                    front = -1;
                    rear= -1;
                }
                else{
                    front = front+1;
                }
            }
            break;
            
            case 3:
            for(i=front;i<=rear;i++){
                printf("%d ",*(a+i));
            }
            break;

            case 4:
            break;

            default:
            printf("Invalid Choice !");
            break;
        }
    }
    free(a);
    return 0;
}