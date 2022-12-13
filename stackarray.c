#include<stdio.h>
int i,c,n,top=-1,stack[100],value;
void display(int stack[], int n);
int main(){
    printf("Enter size of stack :\n");
    scanf("%d",&n);
    while(c!=5){
        printf("\nEnter your choice :\n1. Push \n2. Peep \n3. Pop \n4. Display\n5. Exit\n");
        scanf("%d",&c);
        switch(c){
            case 1:
            if(top==n-1){
                printf("Overflow !");
                break;
            }
            else{
                printf("enter value to push :\n");
                scanf("%d",&value);
                top=top+1;
                stack[top]=value;
                break;
            }
            break;

            case 2:
            if(top==-1){
                printf("Underflow !");
            }
            printf("%d",stack[top]);
            break;

            case 3:
            if(top==-1){
                printf("Underflow !");
                break;
            }
            else{
                value=stack[top];
                printf("popped %d out of stack",value);
                top--;
                break;
            }
            break;

            case 4:
            display(stack, top);
            break;

            case 5:
            break;

            default:
            printf("Invalid choice !");
            break;
        }
    }
    return 0;
}
void display(int stack[], int top){
    for(int i=0;i<=top;i++){
        printf("%d ",stack[i]);
    }
}
