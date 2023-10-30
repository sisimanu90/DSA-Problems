#include<iostream>
#include<string>
using namespace std;

char getMaxOcc(string s){
    int arr[26]={0};

    //create an array of count of character
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        //lowercase
        int num=0;
        num=ch-'a';
        arr[num]++;
    }

    //find max occuring character
    int maxi=-1;
    int ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }

    char answer='a'+ans;
    return answer;
}
int main(){
    string s;
    cin>>s;
    cout<<getMaxOcc(s)<<endl;
    return 0;

}
