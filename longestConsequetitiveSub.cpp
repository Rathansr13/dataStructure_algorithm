#include<bits/stdc++.h>
using namespace std;


int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int longest=1 ,count=0,smallest=INT_MIN;
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        if(a[i]-1==smallest){
            count+=1;
            smallest=a[i];
        }
        else if(a[i]!=smallest)
        {
            count=1;
            smallest=a[i];
        }
        longest=max(longest,count);
    }

    return longest;
}


int main()
{
    vector<int> arr={1,8,102,2,3,104,102,103};
    int result=longestSuccessiveElements(arr);
    cout<<result<<endl;
    
}