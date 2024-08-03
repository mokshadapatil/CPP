#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> v={1,2,3,4};
    v.push_back(5);
    v.push_back(6);
    v.pop_back();

    cout<<"using iterator"<<endl;
    list<int>::iterator itr;
    for(itr=v.begin(); itr!=v.end(); itr++)
       cout<<*itr<<endl;
       
    cout<<"using for each loop"<<endl;
    for(int x:v)
       cout<<x<<endl;
}