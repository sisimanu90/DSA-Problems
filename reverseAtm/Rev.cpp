//Given an array of integers and position ‘M’. You have to reverse the array after that position.
#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	int s=m+1;
	int e=arr.size()-1;
	while(s<=e){
		swap(arr[s],arr[e]);
		s++;
		e--;
	}
    return arr;
}

void print(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main(){
    vector<int> arr={1,2,3,4,5,6};
    int m=3;
    vector<int> ans=reverseArray(arr,m);

    cout<<"Reversed Array: "<<endl;
    print(ans);

    return 0;
}