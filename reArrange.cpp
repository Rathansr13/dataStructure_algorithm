#include<bits/stdc++.h>
using namespace std;



vector<int> alternateNumbers(vector<int>&a) 
{
    // Write your code here.
    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>0){
            pos.push_back(a[i]);
        }else{
          neg.push_back(a[i]);
        }
    }

    if(pos.size()>neg.size())
    {
        for (int i = 0; i < neg.size(); i++) 
        {
          a[i * 2] = pos[i];
          a[i*2+1]=neg[i];
        } 
        int index=neg.size();
        for(int i=neg.size();i<pos.size();i++)
        {
            a[index]=pos[i];
            index++;
        }


    }
    else
    {
        for (int i = 0; i < pos.size(); i++) 
        {
          a[i * 2]=pos[i];
          a[i*2+1]=neg[i];
        } 
        int index=pos.size();
        for(int i=pos.size();i<neg.size();i++)
        {
            a[index]=neg[i];
            index++;
        }

       

    }
 return a;
}

int main(){
    vector<int>a={2,-3,-2,4,-1,5};

    vector<int> result = alternateNumbers(a);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i];
    }

}