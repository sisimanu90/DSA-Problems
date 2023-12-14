class Solution(object):
    def missingNumber(self, nums):
        n=len(nums)
        sumofNumbers=n*(n+1)//2
        totalSum=sum(nums)
        missing=sumofNumbers-totalSum
        return missing
#         n=len(nums)
#         xor1=0
#         xor2=0
#         for i in range(1,n+1):
#             xor1=xor1^i
            
#         for i in range(0,n-1):
#             xor2=xor2^nums[i]
#         xor3=xor1^xor2
#         return xor3
        
        