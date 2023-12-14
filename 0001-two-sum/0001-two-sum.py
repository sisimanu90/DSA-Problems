class Solution(object):
    def twoSum(self, nums, target):
        seen={}
        for i,num in  enumerate(nums): #enumerate returns (index,value)
            if target-num in seen:
                return ([seen[target-num],i])
            elif num not in seen:
                seen[num]=i



// i will suggest you should work with cpp only as in interviews they will ask not to use built in functions and so it would be better if you prac in cpp only .
        
