#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int key){
	int start=0;
	int end=n-1;
	int ans=-1;
	
	while(start<=end){
		int mid=start +(end-start)/2;
		if(arr[mid]==key){
			ans=mid;
			end=mid-1;
	
		}

		else if(key>arr[mid]){
			start=mid+1;	
		}
		else{
			end=mid-1;			
		}	
		
	}
	return ans;
}
		
int lastOcc(int arr[],int n,int key){
	int start=0;
	int end=n-1;
	int ans=-1;
	
	while(start<=end){
		int mid=start +(end-start)/2;
		if(arr[mid]==key){
			ans=mid;
			start=mid+1;
	
		}

		else if(key>arr[mid]){
			start=mid+1;	
		}
		else{
			end=mid-1;			
		}	
		
	}
	return ans;
}
		



int main(){
	int arr[8]={0,0,1,1,2,2,2,2};

	int first=firstOcc(arr,8,2);
	int last=lastOcc(arr,8,2);
	cout<<"First Occurence: "<<first<<endl;
	cout<<"Last Occurence: "<<last<<endl;

	
	return 0;
	
}