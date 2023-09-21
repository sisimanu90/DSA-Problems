#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("VIT");
    q.push("Vellore");
    q.push("College");
    cout<<"Size before pop "<<q.size()<<endl;

    cout<<"First Element: "<<q.front()<<endl; //FIRST IN FIRST OUT
    q.pop();
    cout<<"First Element: "<<q.front()<<endl;

    cout<<"Size after pop "<<q.size()<<endl;

}