//Reverse words in a string (with char and white spaces in input)
#include<iostream>
#include<string>
using namespace std;

void reverse(string w){
    int s=0;
    int e= w.size()-1;
    while(s<e){
        swap(w[s++],w[e--]);
    }

}

int main(){
    string word;
    cout<<"Enter a string "<<endl;
    getline(cin,word);
    
   
    string temp="";
    for(int i=0;i<word.length();i++){
        if(word[i] == ' ' || i==word.length()-1){
            temp.push_back(word[i]);
            reverse(temp);  
        }
        }
        cout<<temp;
        
        return 0;
    }


