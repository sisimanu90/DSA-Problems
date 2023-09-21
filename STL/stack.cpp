#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;

    s.push("VIT");
    s.push("Vellore");
    s.push("College");
    
    cout<<"Top Element "<<s.top()<<endl;

    s.pop();
    cout<<"Top Element After pop "<<s.top()<<endl;

    cout<<"Size "<<s.size()<<endl;
    cout<<"Empty or not "<<s.empty()<<endl;


}