class Solution:
    def trap(self, height: List[int]) -> int:
        left=0
        right=len(height)-1
        leftm=height[left]
        rightm=height[right]
        water=0

        while left<right:
            if leftm<rightm:
                left+=1
                leftm=max(leftm,height[left])
                water+=leftm-height[left]
            else:
                right-=1
                rightm=max(rightm,height[right])
                water+=rightm-height[right]
        return water