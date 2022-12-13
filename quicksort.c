#include<stdio.h>
void swap(int a[], int i, int j);
void Quicksort(int a[], int p, int q);
int Partition(int a[], int m, int n);

int main(){
    int i,p=0;
    //printf("Enter size of array: \n");
    //scanf("%d",&n);
    int a[]={23,76,45,32,89,12,43,76,56,78,25,11,49,84,47};
    int n=sizeof(a)/sizeof(int);
    int q=n-1;
    /*for(i=0;i<n;i++){
        printf("enter element %d:\n",i+1);
        scanf("%d",&a[i]);
    }*/
    Quicksort(a,p,q);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
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
void Quicksort(int a[],int p,int q){
    int j=q;
    if(p<q){
        j=Partition(a,p,q+1);
        Quicksort(a,p,j-1);
        Quicksort(a,j+1,q);
    }
}