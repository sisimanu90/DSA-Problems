//SELECTION SORT
#include <bits/stdc++.h> 
using namespace std;
void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
        
    }
}
void printArray(vector<int>& arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr={64,25,12,11,22};
    selectionSort(arr,5);
    printArray(arr,5);
    return 0;
}