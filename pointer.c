#include<stdio.h>
int main(){
    int a=80;
    int* ptr=&a;
    printf("address of variable a is: %p\n",ptr);
    printf("%p\n",&a);
    printf("%p\n",&ptr);
    printf("%x\n",&ptr);
    printf("%x\n",&a);
    printf("%d\n",&a);
    printf("value of variable is :%d\n",*ptr);
    printf("memory something of something is :%p\n",*ptr);
    return 0;
}