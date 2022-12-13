#include<stdio.h>
//#include<conio.h>
void merge(int A[], int mid, int low, int high)
{
    int i, j, h, B[100];
    i = low;
    j = mid + 1;
    h = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[h] = A[i];
            i++;
            h++;
        }
        else
        {
            B[h] = A[j];
            j++;
            h++;
        }
    }
    while(i <= mid)
    {
            B[h] = A[i];
            h++;
            i++;
    }
    while(j<=high)
    {
            B[h] = A[j];
            h++;
            j++;
        
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
    
}

void mergeSort(int A[], int low, int high){
    if(low<high){
        int mid = (low + high) /2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}
int main(){
    int i,j,n,low=0;
    int a[]={5,2,9,110,77,11,55,99,512,22,33,88,66,44};
    n=sizeof(a)/sizeof(int);
/*    printf("enter no of elements in array:\n");
    scanf("%d",&n);
    int a[n];*/
    int high=n-1;
/*    for(i=0;i<n;i++){
        printf("enter element %d:\n",i+1);
        scanf("%d",&a[i]);
    }*/
    mergeSort(a,low,high);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}