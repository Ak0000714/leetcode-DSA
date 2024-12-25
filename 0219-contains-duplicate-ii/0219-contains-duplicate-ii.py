class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        mappuda={}

        for i in range(len(nums)):
            if nums[i] in mappuda:
                if i-mappuda[nums[i]]<=k:
                    return True
            mappuda[nums[i]]=i
        return False
            

            

        
        