#include<stdio.h>
void bubble(int a[],int n);
void ss(int a[],int n);
void ms(int a[],int low, int high);
void merge(int a[], int mid, int low, int high);
void quick(int a[], int p, int q);
void swap(int a[], int i, int j);
int Partition(int a[], int m, int n);

int main(){
    int i,n,choice,low=0;
    printf("Enter size of your array: \n");
    scanf("%d",&n);
    int a[n],high=n-1;
    for(i=0;i<n;i++){
        printf("Enter element %d:\n",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nChoose your sorting algorithm:\n1. Bubble Sort\n2. Selection Sort\n3. Merge Sort\n4. Quick Sort\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        bubble(a,n);
        break;
        case 2:
        for(i=0;i<n;i++){
            ss(a,n);
        }
        break;
        case 3:
        ms(a,low,high);
        break;
        case 4:
        quick(a, low, high);
        break;
        default:
        printf("Invalid Choice !");
        break;
    }
    printf("Sorted array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
void bubble(int a[],int n){
        for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }
        }
    }
}
void ss(int a[],int n){
    int min_index, temp;
    for (int i = 0; i < n-1; i++)
    {
        min_index = i;
        for (int j = i+1; j < n; j++)
        {
            if(a[j] < a[min_index])
                min_index = j;
        }
        temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
}
void ms(int a[], int low, int high){
    
    if(low<high){
        int mid = (low + high) /2;
        ms(a, low, mid);
        ms(a, mid+1, high);
        merge(a, mid, low, high);
    }
}
void merge(int a[], int mid, int low, int high){
    int i, j, h, B[100];
    i = low;
    j = mid + 1;
    h = low;

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            B[h] = a[i];
            i++;
            h++;
        }
        else
        {
            B[h] = a[j];
            j++;
            h++;
        }
    }
    while(i <= mid)
    {
            B[h] = a[i];
            h++;
            i++;
    }
    while(j<=high)
    {
            B[h] = a[j];
            h++;
            j++;
        
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = B[i];
    }
}
int Partition(int a[],int m,int n){
    int v=a[m],i=m,j=n;
    do{
        do{
            i++;
        }while(a[i]<v);
        do{
            j--;
        }while(a[j]>v);
        if(i<j){
            swap(a,i,j);
        }
    }while(i<j);
    a[m]=a[j];
    a[j]=v;
    return j;
}
void swap(int a[],int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
void quick(int a[],int p,int q){
    int j=q;
    //printf("haisfamo");
    if(p<q){
        j=Partition(a,p,q+1);
        quick(a,p,j-1);
        quick(a,j+1,q);
    }
}