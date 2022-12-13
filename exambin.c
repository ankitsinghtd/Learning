#include<stdio.h>
void main(){
    int i,j,arr[]={2,6,9,12,55,61,67,81,83,89,92,99},item,low=0,mid,high;
    int n=sizeof(arr)/sizeof(int);
    printf("Enter item to find:\n");
    scanf("%d",&item);
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==item){
            printf("Found %d at index %d",item,mid);
            break;
        }
        else if(arr[mid]>item){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        
    }
}