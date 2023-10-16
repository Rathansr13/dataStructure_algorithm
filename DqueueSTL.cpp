#include<iostream.h>
#include<stdio.h>
#include<deque>
using namespace std;


int main()
{
    deque<int> dquiz;
    dquiz.push_back(10);
    dquiz.push_front(20);
    dquiz.push_back(30);
    dquiz.push_front(15);
    cout<<dquiz.pop_front<<endl;
    return 0;
}