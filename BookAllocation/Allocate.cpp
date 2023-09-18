/*BOOK ALLOCATION PROBLEM
->each student gets atleast one book
->each book is allocated 
->allocation is done in continuous manner 
Allocate book to m students such that max number of pages assigned to a student is min
*/
#include<iostream>
#include<vector>
using namespace std;
//n number of books
//m number of students

bool isPossibleSol(vector<int> arr,int n,int m,int mid){
	int studentCount=1;
	int pageSum=0;
	for(int i=0;i<n;i++){
		if(pageSum+arr[i]<=mid){
			pageSum+=arr[i];
		}
		else{
			studentCount++;
			if((studentCount>m)||(arr[i]>mid)){
				return false;
			}
			pageSum=arr[i]; //sum starts again for student 2
		}
	
	}
	return true;
	
}
int allocate(vector<int> arr,int n,int m){
	int s=0;
	int sum=0;
	int ans=-1;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	int e=sum;//creating a search space where min=0 and max=sum of all elements
	int mid=s+(e-s)/2;
	while(s<=e){
		if(isPossibleSol(arr,n,m,mid)){
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}

int main(){
	vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
	int allocateBook=allocate(arr,4,2);
	cout<<allocateBook<<endl;
}

