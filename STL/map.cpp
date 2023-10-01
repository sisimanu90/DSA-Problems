#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;
    m[1]="khyati";
    m[2]="Khurana";
    m[14]="Uni";

    m.insert({5,"Apple"});

    
    for(auto i:m){
        cout<<i.first<<endl; //returns keys in sorted order
    }
    cout<<"Before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<< i.second<<endl; 
    }

    
    cout<<"Find 14 "<<m.count(14)<<endl;
    m.erase(14);
    cout<<"After erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<< i.second<<endl; 
    }
    
    auto it=m.find(5);

    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}