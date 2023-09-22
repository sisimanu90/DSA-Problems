#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> maxi; //max heap(default)

    //min heap
    priority_queue<int,vector<int> , greater<int>> min;
    
    maxi.push(1);
    maxi.push(5);
    maxi.push(3);
    maxi.push(0);

    cout<<"Size: "<<maxi.size();
    int n=maxi.size();

    for(int i=0;i<n;i++){

        cout<<maxi.top()<<" ";
        maxi.pop();

    }
    cout<<endl;

}