#include<iostream>
using namespace std;
int main(){
    int i,j,n,at[20], wt[20],bt[20],tat[20],total=0;
    float totalwt=0,totaltat=0,avgwt,avgtat;
    cout<<"enter no. of processes:\n";
    cin>>n;
    cout<<"\nEnter Process Burst Time\n";
    for(i=0;i<n;i++){
        cout<<"P["<<i+1<<"]:";
        cin>>bt[i];
    }
    cout<<"\nEnter Process Arrival Time\n";
    for(i=0;i<n;i++){
        cout<<"P["<<i+1<<"]:";
        cin>>at[i];
    }    
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(at[j]>at[j+1]){
                at[j]=at[j]+at[j+1];
                at[j+1]=at[j]-at[j+1];
                at[j]=at[j]-at[j+1];
            }
        }
    }
    wt[0]=0;
    total=at[0]+bt[0];
    for(i=1;i<n;i++){
        wt[i]=0;       
        wt[i]=total-at[i];
        total=total+bt[i];
        totalwt+=wt[i];
    }
    cout<<"\nProcess\t\tArrival Time\t\t Burst time \t\t Waiting time \t\t TurnAround time";
    for(i=0;i<n;i++){
        tat[i]=bt[i]+wt[i];
        totaltat+=tat[i];
        cout<<"\nP["<<i+1<<"]"<<"\t\t\t"<<at[i]<<"\t\t\t"<<bt[i]<<"\t\t\t"<<wt[i]<<"\t\t\t"<<tat[i];
    }
    avgwt=totalwt/n;
    avgtat=totaltat/n;
    cout<<"\nAverage waiting time: "<<avgwt;
    cout<<"\nAverage turn around time: "<<avgtat;
    cout<<"\ntotal time: "<<total;
    return 0;
}