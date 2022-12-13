#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    float avwt,avtat,totalwt=0,totaltat=0;
    cout<<"enter no of processes:\n";
    cin>>n;
    int bt[n],wt[n],tat[n];
    cout<<"enter burst time ";
    for(i=0;i<n;i++){
        cout<<"\n[P"<<i+1<<"]: ";
        cin>>bt[i];
    }
    //sorting with burst time
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(bt[j]>bt[j+1]){
                bt[j]=bt[j]+bt[j+1];
                bt[j+1]=bt[j]-bt[j+1];
                bt[j]=bt[j]-bt[j+1];
            }
        }
    }
    //calculating waiting times
    wt[0]=0;
    for (i = 1; i < n; i++) {
        wt[i] = 0;
        wt[i] = bt[i-1]+wt[i-1];
        totalwt+=wt[i];
    }
    //calculating turn-around times
    for(i=0;i<n;i++){
        tat[i]=bt[i]+wt[i];
        totaltat+=tat[i];
    }
    avwt=totalwt/n;
    avtat=totaltat/n;
    cout<<"Process\tBurst Time\tWaiting Time\tTurn-around Time";
    for(i=0;i<n;i++){
        cout<<"\nP["<<i+1<<"]\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
    }
    cout<<"\nAverage waiting time: "<<avwt;
    cout<<"\nAverage turn-around time: "<<avtat;
    return 0;
}