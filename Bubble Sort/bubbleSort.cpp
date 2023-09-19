#include <bits/stdc++.h> 
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1 ;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
            //already sorted
        }
    }
}

void printArray(vector<int>& arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr={10,1,7,6,14,9};
    bubbleSort(arr,6);
    printArray(arr,6);

}