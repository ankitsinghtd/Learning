#include<stdio.h>
void insertion(int arr[], int n);
int main(){
    int arr[]={6,814,651,616,71,7,3,5735,745,84,46,7,9,5,2,1};
    int i, n=sizeof(arr)/sizeof(int);
    insertion(arr, n);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
void insertion(int arr[], int n){
    int i,j;
    for(i=1;i<n;i++){
        int temp=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}