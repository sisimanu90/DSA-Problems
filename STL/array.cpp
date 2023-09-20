//STANDARD TEMPLATE LIBRARY
#include<iostream>
#include<array>
using namespace std;

int main(){
	//int basic[4]={1,2,3,4};
	array<int,4> a={5,6,7,8}; //static
	int size=a.size();
	for(int i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
	cout<<"Element at index 2: "<<a.at(2)<<endl;
	cout<<"Empty or Not: "<<a.empty()<<endl; //returns isEmpty true or false
	cout<<"First Element: "<<a.front()<<endl;
	cout<<"Last Element: "<<a.back()<<endl;
}
