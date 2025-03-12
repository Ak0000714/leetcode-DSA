class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int maxc=0;
        int minc=0;
        int n=nums.size();
         int result;
        for(int i=0;i<n;i++){
           
            if(nums[i]>0){
                maxc++;

            }
            if(nums[i]<0){
                minc++;
            }
         result=max(maxc,minc);
        }
        return result;
    }
};