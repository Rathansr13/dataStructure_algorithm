#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vect;
    vect={1,2,3,4,5};
    cout<<endl;
    vect.push_back(6);
    vect.push_back(7);
    for(auto it=vect.begin();it!=vect.end();it++)
    cout<<*it<<endl;
    cout<<endl;
    vect.pop_back();
    vect.pop_back();
    vect.insert(vect.begin()+3,10);
    for(auto it=vect.begin();it!=vect.end();it++)
    cout<<*it<<endl;
    //cout<<vect.empty();
    cout<<vect.capacity()<<endl;
} // namespace std;
