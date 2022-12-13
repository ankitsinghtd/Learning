#include<stdio.h>
void swap(int a[], int i, int j);
void quicks(int a[], int p, int q);
int part(int a[], int m, int n);
void disp(int a[],int n);
int main(){
    int i,p=0,a[]={26,15,67,24,7,9,12,45,2};
    int n=sizeof(a)/sizeof(int);
    int q=n-1;
    quicks(a,p,q);
    printf("Sorted Array :");
    disp(a,n);
    return 0;
}
void quicks(int a[], int p, int q){
    int j=q;
    if(p<q){
        j=part(a,p,q+1);
        quicks(a,p,j-1);
        quicks(a,j+1,q);
    }
}

int part(int a[], int m, int n){
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

void swap(int a[], int i, int j){
    int temp= a[i];
    a[i]=a[j];
    a[j]=temp;
}
void disp(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}