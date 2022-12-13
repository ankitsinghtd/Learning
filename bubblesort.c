#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element %d:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}