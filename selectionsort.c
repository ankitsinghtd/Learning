#include<stdio.h>
void selectsort(int A[], int n){
    int min_index, temp;
    for (int i = 0; i < n-1; i++)
    {
        min_index = i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j] < A[min_index])
                min_index = j;
        }
        temp = A[i];
        A[i] = A[min_index];
        A[min_index] = temp;
    }
}
int main(int argc,char const *argv ){
    int i,n;
    printf("enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("enter element %d:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        selectsort(arr,n);
    }
    for ( int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}