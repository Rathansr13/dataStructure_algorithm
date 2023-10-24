#include<bits/stdc++.h>
using namespace std;


vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> ans;
    int maxi=INT_MIN;
    int n = a.size();
     for(int i=n-1;i>=0;i--){
         if(a[i]>maxi){
             ans.push_back(a[i]);
         }
         maxi=max(maxi,a[i]);
     }


    sort(ans.begin(),ans.end());
    return ans;
}

int min(){
    vector<int> a={22,12,24,6,8,9,1};
    vector<int>ans =superiorElements(a);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}