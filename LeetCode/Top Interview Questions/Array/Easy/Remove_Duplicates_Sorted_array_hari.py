class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums)==0:
                return 0
        i=0
        for j in range(1,len(nums)):
            if(nums[j] != nums[i]):
                i+=1
                nums[i]=nums[j]
        return i+1
    
    
    
    ## second attempt
    
    class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        curr =0
        nex =1
        while(nex <len(nums)):
            if nums[curr] != nums[nex]:
                curr+=1
                nex+=1                                              
            else:
                del nums[nex]
        
        return len(nums)
