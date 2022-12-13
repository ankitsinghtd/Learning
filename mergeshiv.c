#include<stdio.h>
void print(int arr[],int len){for(int i = 0 ; i < len ; i++)printf("%d ", arr[i]);printf("\n");}
void mergeSort(int arr[], int len);
void merge(int arr[],int left[],int left_len,int right[],int right_len);

int main(){
    int arr[] = {9,8,7,6,5,4,3,2,95,84,682,654,484,638,3351,811,311,22,3345,311,21};
    int len = sizeof(arr)/sizeof(arr[0]);
    print(arr,len);
    mergeSort(arr,len);
    print(arr,len);
    return 0;
}

void mergeSort(int arr[], int len){
    if(len == 1) return;
    int mid = len/2;
    int left[mid];
    int right[len-mid];
    for(int i = 0 ; i< mid ; i++)
        left[i] = arr[i];
    for(int j = 0 ; j < len - mid ; j++){
        right[j] = arr[mid+j];
    }
    mergeSort(left,mid);
    mergeSort(right,len-mid);
    merge(arr,left,mid,right,len-mid);

}

void merge(int arr[],int left[],int left_len,int right[],int right_len){
    int i = 0 , j = 0 , k = 0;
    while(i<left_len && j<right_len){
        if(left[i]<right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(i<left_len){
        arr[k] = left[i];    
        k++;
        i++;
        }

    while(j<right_len){
        arr[k] = right[j];    
        k++;
        j++;
        }
}