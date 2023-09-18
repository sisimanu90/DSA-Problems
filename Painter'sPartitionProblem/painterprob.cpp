//codingninjas
//Painter's Partition Problem
#include<iostream>
#include<vector>
using namespace std;
bool isPossibleSol(vector<int> &boards,int k,int mid){
    int painterCount=1;
    int boardsSum=0;
    for(int i=0;i<boards.size();i++){
        if((boardsSum+boards[i])<=mid){
            boardsSum+=boards[i];
        }
        else{
            painterCount++;
            if((painterCount>k)||(boards[i]>mid)){
                return false;
            }
            boardsSum=boards[i];
        }
       
    }
    return true;
}

int jobDone(vector<int> &boards,int k){
    int s=0;
    int sum=0;
    int ans=-1;
    for(int i=0;i<boards.size();i++){
        sum+=boards[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossibleSol(boards,k,mid)){
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

int main()
{
    vector<int> arr={10, 20, 30 ,40};
    //k:number of painters
    int paint=jobDone(arr,2);
    cout<<paint<<endl;
    return 0;
}