//Search In Rotated Sorted Array
#include<iostream>
#include<vector>
using namespace std;
    int findPivot(vector<int>& arr,int n){
        int s=0;
        int e=n-1;
        while(s<e){
            int mid=s+(e-s)/2;
            if(arr[mid]>=arr[0]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            
        }
        return s;
    }

    int binarySearch(vector<int>& arr,int start,int end,int k){
        int s=start;
        int e=end;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==k){
                return mid;
            }
            else if(k>arr[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return -1;
    }



    int search(vector<int>& arr, int n, int k)
    {
        // Write your code here.
        // Return the position of K in ARR else return -1.
        int pivot=findPivot(arr,n);
        if((arr[pivot]<=k) &&(k<=arr[n-1])){
            return binarySearch(arr,pivot,n-1,k);
            //Second Line
        }
        else{
            return binarySearch(arr,0,pivot-1,k);
            //FirstLine
        }
    }

    int main() {
    vector<int> arr = {12, 15, 18, 2, 4};
    int k = 2;
    
    int result = search(arr, arr.size(), k);
    
    if (result != -1) {
        cout << "Element " << k << " found at index " << result << endl;
    } else {
        cout << "Element " << k << " not found in the array." << endl;
    }

    return 0;
}


