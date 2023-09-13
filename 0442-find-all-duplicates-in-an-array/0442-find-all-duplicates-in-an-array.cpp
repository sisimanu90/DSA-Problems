class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        //sorting input vector in ascending order
        sort(nums.begin(),nums.end());
        //creating a vector to store duplicate elements
        vector<int> duplicate;
        
        for(int i=0;i<nums.size()-1;i++){
            // Check if the current element is equal to the next element
            if(nums[i]==nums[i+1]){
                duplicate.push_back(nums[i]);
            }
            
        }
        return duplicate;
        
        
        
    }
};