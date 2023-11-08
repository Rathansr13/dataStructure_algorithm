#include<iostream>
using namespace std;


int swapsreq(int num,int i,int j)
{
  string numString=std::to_string(num);
  swap(numString[i],numString[j]);
  return std::stoi(numString);
}
int maxSwap(int N,int M)
{
    int swaps=0;
    string numString  = std::to_string(N);
    int maxIndex=0;

    for(int i=0;i<numString.length()-1 && swaps<M;i++)
    {
        maxIndex=i;
        for(int j=i+1;j<numString.length()-1;j++)
        {
            if(numString[j]>numString[maxIndex])
            {
                maxIndex=j;
            }
        }
        if(maxIndex!=i)
        {
        N=swapsreq(N,i,maxIndex);
        }
    }
    return N;
}
int main()
{
    int N,M;
    cin>>N;
    cin>>M;
    int result = maxSwap(N,M);
    cout<<result;
}