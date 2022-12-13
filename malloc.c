#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,*ptr;
    printf("Enter no of elements in your array:\n");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Enter element %d:\n",i+1);
        scanf("%d",(ptr+i));
    }
    i=0;
    while(i<n){
        printf("%d ",*(ptr+i));
        i++;
    }
    realloc(ptr, 8);
    i=0;
    printf("\n");
    while(i<n){
        printf("%d ",*(ptr+i));
        i++;
    }
    free(ptr);
    return 0;
}