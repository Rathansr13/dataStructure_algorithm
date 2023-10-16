#include<stdio.h>
#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,5> arr1={1,2,3,4,5};
    array<char,5>arr2={'g','f','g','g','g'};
    for(auto i : arr1)
    {
    cout<<i<<endl;
    }
    for(auto i=arr1.begin();i!=arr1.end();++i)
    cout<<*i<<endl;
    auto it = arr1.end();
    cout<<*it<<endl;
    cout<<!arr1.empty()<<endl;
    cout<<endl;
    int i=0;
    while(arr1.empty())
    {
        if(i==arr1.size())
        break;
        cout<<arr1[i];
        i++;
    }
} 
