#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> v={1,2,3,4};
    v.insert(5);
    v.insert(6);
    v.erase(6);

    cout<<"using iterator"<<endl;
    set<int>::iterator itr;
    for(itr=v.begin(); itr!=v.end(); itr++)
       cout<<*itr<<endl;
       
    cout<<"using for each loop"<<endl;
    for(int x:v)
       cout<<x<<endl;
}