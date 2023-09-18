class Solution {
public:
    long long int binarySeach(int num){
    int s=0;
    int e=num;
    long long int ans=-1;
    long long int mid=s+(e-s)/2;
    while(s<=e){
        long long int sqr=mid*mid; //sqr can go out of INT range so use long long int
        if(sqr==num){
            return mid;
        }
        else if(sqr<num){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
    int mySqrt(int x) {
        return binarySeach(x);
        
    }
};