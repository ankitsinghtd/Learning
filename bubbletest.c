#include<stdio.h>
int main(){
    int i,j,arr[]={2,75,52,12,64,43,15,64,12};
    int n=sizeof(arr)/sizeof(int);
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    printf("sorted array :");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}