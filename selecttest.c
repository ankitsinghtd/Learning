#include<stdio.h>
void selectsort(int arr[],int n,int low, int high){
    int mid=(low+high)/2;
    for(int i=0;i<n;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[min_index]>arr[j]){
                min_index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }
}
int main(){
    int i,arr[]={13,25,75,12,8,52,32,5,43,11,51};
    int n=sizeof(arr)/sizeof(int);
    int low=0,high=n;
    for(i=0;i<n;i++){
        selectsort(arr,n,low, high);
    }
    printf("sorted array :");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}