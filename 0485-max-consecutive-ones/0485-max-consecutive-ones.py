class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        count=0
        maxCount=0
        for i in range(0,len(nums)):
            if nums[i]==1:
                count+=1
            else:
                count=0
            maxCount=max(maxCount,count)
        return maxCount
                
            
        
        