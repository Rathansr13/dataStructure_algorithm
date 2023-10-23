#include<bits/stdc++.h>
using namespace std;
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int minPrice=INT_MAX;
    int maxPro=INT_MIN;
    for(int i=0;i<prices.size();i++){
        minPrice=min(minPrice,prices[i]);
        maxPro=max(maxPro,prices[i]-minPrice);
    }
    return maxPro;
}

int main()
{
    vector<int> prices={2,100,150,120};
   int result=maximumProfit(prices);
   cout<<result<<endl;
    
}