#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;

    list<int>n(l); //copy

    list<int> m(5,100); //size:5, initialise with 100
    cout<<"print m"<<endl;
    for(int i:m){
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size "<<l.size()<<endl;


}