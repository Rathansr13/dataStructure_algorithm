#include<iostream>
using namespace std;
int main()
{
    
    cout<<"hellow world"<<endl;
    int at[30],bt[30],rt[30];
    int n,i,j,k;
    int time=0;
    int smallest;
    int completionTime=0;
    int remain=0;
    cout<<"emter the no of process"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the arrival time for p"<<i+1<<endl;
         cout<<"Enter the burst time for p"<<i+1<<endl;
         rt[i]=bt[i];
    }

    for(time=0;remain!=n;time++)
    {
        for(i=0;i<n;i++)
        {
            if(at[i]<=time && rt[i])
            {
                smallest=i;
                

            }
        }
        rt[smallest]--;
        if(rt[smallest]==0)
        {
            remain++;
            completionTime=time;
            cout<<"process"<<i+1<<"completed"<<endl;
        }
    }

} 
