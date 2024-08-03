#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> v={1,2,3,4};
    v.push_back(5);
    v.push_back(6);
    v.pop_back();

    cout<<"using iterator"<<endl;
    deque<int>::iterator itr;
    for(itr=v.begin(); itr!=v.end(); itr++)
       cout<<*itr<<endl;
       
    cout<<"using for each loop"<<endl;
    for(int x:v)
       cout<<x<<endl;
}