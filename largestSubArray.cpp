
#include<iostream>
#include<vector>

using namespace std;

long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long maxi=LONG_MIN;
    long long sum=0;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];

        if(sum>maxi)
        {
          maxi=sum;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    return maxi;
}

int main()
{
    vector<int> arr={1,-1,2,3,4,5,5,5,7};
    int n=arr.size();
    long long result=0;
    cout<<maxSubarraySum(arr,n);
}