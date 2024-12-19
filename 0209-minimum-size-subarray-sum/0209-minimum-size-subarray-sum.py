class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        n=len(nums)
        st=0
        currsum=0
        min_len=float('inf')
        for i in range(n):
            currsum+=nums[i]
            while currsum>=target:
             min_len=min(min_len,i-st+1)
             currsum-=nums[st]
             st+=1
        return (min_len if min_len!=float('inf')else 0)




        