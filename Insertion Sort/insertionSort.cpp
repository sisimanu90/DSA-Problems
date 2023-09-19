#include <bits/stdc++.h> 
using namespace std;
void insertionSort(int n, vector<int> &arr){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j]; //shift
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
        
    }
}

void printArray(vector<int>& arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr={67,49,2,54,7,9};
    insertionSort(6,arr);
    printArray(arr,6);

}