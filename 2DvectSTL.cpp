#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>>  vect;
    vect={
        {1,2,3},
        {4,5},
        {7,}
    };
    for(auto i=0;i<vect.size();i++)
    {
        for(auto j=0;j<vect[i].size();j++)
        {
            cout<<vect[i][j]<<" ";

        }
    }

}