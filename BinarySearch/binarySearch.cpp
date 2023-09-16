#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
	int start=0;
	int end=n-1;

	while(start<=end){
		int mid=(start+end)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(key>arr[mid]){
			start=mid+1;	
		}
		else{
			end=mid-1;			
		}	
		
	}
	return -1;
	
		
	}
	

int main(){
	int arr[6]={3,5,9,13,24,27};
	int n=6;
	int key;
	int index=binarySearch(arr,6,27);
	cout<<index<<endl;
	
	return 0;
	
}