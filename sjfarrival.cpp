#include<iostream>
using namespace std;
void sort(int arr[], int i, int j, int n);
int main(){
    int i=0,j=0,n,total=0;
    float avwt,avtat,totalwt=0,totaltat=0;
    cout<<"enter no of processes:\n";
    cin>>n;
    int bt[n],wt[n],tat[n],at[n];
    //taking burst time as input
    cout<<"enter burst time ";
    for(i=0;i<n;i++){
        cout<<"\n[P"<<i+1<<"]: ";
        cin>>bt[i];
    }
    //taking arrival time as input
    cout<<"enter arrival time ";
    for(i=0;i<n;i++){
        cout<<"\n[P"<<i+1<<"]: ";
        cin>>at[i];
    }    
    //sorting with arrival time
    sort(at,i,j,n);
    //sorting with burst time
    sort(bt,i,j,n);

    //calculating waiting times
    wt[0]=0;
    total=at[0]+bt[0];
    for (i = 1; i < n; i++) {
        wt[i] = 0;
        wt[i] = total-at[i];
        total+=bt[i];
        totalwt+=wt[i];
    }
    //calculating turn-around times
    for(i=0;i<n;i++){
        tat[i]=bt[i]+wt[i];
        totaltat+=tat[i];
    }
    avwt=totalwt/n;
    avtat=totaltat/n;
    cout<<"Process\tArrival Time\tBurst Time\tWaiting Time\tTurn-around Time";
    for(i=0;i<n;i++){
        cout<<"\nP["<<i+1<<"]\t\t"<<at[i]<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
    }
    cout<<"\nAverage waiting time: "<<avwt;
    cout<<"\nAverage turn-around time: "<<avtat;
    return 0;
}
void sort(int arr[],int i,int j,int n){
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
    }
}