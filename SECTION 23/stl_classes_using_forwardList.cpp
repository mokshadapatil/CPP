#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int> v={1,2,3,4};
    v.push_front(5);
    v.push_front(6);
    v.pop_front();

    cout<<"using iterator"<<endl;
    forward_list<int>::iterator itr;
    for(itr=v.begin(); itr!=v.end(); itr++)
       cout<<*itr<<endl;
       
    cout<<"using for each loop"<<endl;
    for(int x:v)
       cout<<x<<endl;
}