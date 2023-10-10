#include<bits/stdc++.h>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool checkPalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
    
        if(toLowerCase(a[s])!=toLowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int getLength(char a[]){
    int count=0;
    for(int i=0;a[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char a[10];
    cout<<"Enter string ";
    cin>>a;
    int len=getLength(a);
    cout<<"Palindrome or not "<<checkPalindrome(a,len)<<endl;

    cout<<"Char: "<<toLowerCase('a')<<endl;
    cout<<"Char: "<<toLowerCase('B')<<endl;
    return 0;
    

}
