#include<iostream>
using namespace std;
int main(){
    int n, wt[20],bt[20],tat[20],avgwt=0,avgtat=0,i,j;
    cout<<"enter no. of processes:\n";
    cin>>n;
    cout<<"\nEnter Process              Burst Time\n";
    for(i=0;i<n;i++){
        cout<<"P["<<i+1<<"]:";
        cin>>bt[i];
    }
    wt[0]=0;
    for(i=1;i<n;i++){
        wt[i]=0;
        for(j=0;j<i;j++){
            wt[i]+=bt[j];
        }
    }
    cout<<"\nProcess\t\t Burst time \t\t Waiting time \t\t TurnAround time";
    for(i=0;i<n;i++){
        tat[i]=bt[i]+wt[i];
        avgwt+=wt[i];
        avgtat+=tat[i];
        cout<<"\nP["<<i+1<<"]"<<"\t\t\t"<<bt[i]<<"\t\t\t"<<wt[i]<<"\t\t\t"<<tat[i];
    }
    avgwt/=i;
    avgtat/=i;
    cout<<"\nAverage waiting time: "<<avgwt;
    cout<<"\nAverage turn around time: "<<avgtat;
    return 0;
}

    