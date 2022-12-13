#include<stdio.h>
int rec(int num){
    if(num==1||num==0)
    return 1;
    return (num*rec(num-1));
}
int main(){
    int num;
    printf("enter a number:\n");
    scanf("%d",&num);
    int result =rec(num);
    printf("factorial of %d is %d",num,result);
    return 0;
}