#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);

    cout<<"Finding 6 "<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"Lower bound"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper bound"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=3;
    int b=5;

    cout<<"Max: "<<max(a,b)<<endl;
    cout<<"Min: "<<min(a,b)<<endl;
    swap(a,b);
    cout<<endl<<"a "<<a<<endl;

    string s="ababc";
    reverse(s.begin(),s.end());
    cout<<"string "<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After Rotate: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Sorted: ";
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

}   
