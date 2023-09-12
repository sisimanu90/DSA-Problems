#include<iostream>
using namespace std;
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";	
	}
	cout<<endl;
}
void Alternate(int arr[],int n){
	for(int i=0;i+1<n;i+=2){
		swap(arr[i],arr[i+1]);
	}

}

int main(){
	int n;
	int arr[6];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	Alternate(arr,6);
	printArray(arr,6);
	
}
