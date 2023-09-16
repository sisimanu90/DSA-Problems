#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
	int start=0;
	int end=n-1;

	while(start<=end){
		int mid=start +(end-start)/2;
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
	//when we calculate mid if start and end is 2^31-1 then it gives a value out of int range so we use 
	//mid=start+ (end-start)/2

int main(){
	int arr[6]={3,5,9,13,24,27};
	int n=6;
	int key;
	int index=binarySearch(arr,6,27);
	cout<<index<<endl;
	
	return 0;
	
}