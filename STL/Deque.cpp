#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    cout<<"Print"<<endl; //21
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Element at index 0: "<<d.at(0)<<endl;
	cout<<"Empty or Not: "<<d.empty()<<endl; //returns isEmpty true or false
	cout<<"First Element: "<<d.front()<<endl;
	cout<<"Last Element: "<<d.back()<<endl;

    cout<<"Size before erase: "<<d.size()<<endl; //21

    d.erase(d.begin(),d.begin()+1);//delete the first element

   cout<<"Size after erase: "<<d.size()<<endl;
}