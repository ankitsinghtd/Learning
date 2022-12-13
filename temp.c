#include<stdio.h>
int main(int argc, char const *argv){
    int i,j,n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element %d:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}