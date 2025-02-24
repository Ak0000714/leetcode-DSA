class Solution {
public:
    vector<int> searchRange(vector<int>&nums, int target) {
     int first=findposition(nums,target,true);
     int sec=findposition(nums,target,false);
     return {first,sec};
    }

   int findposition(vector<int>&nums,int target,bool findf){
    int left=0;
    int right=nums.size()-1;
    int res=-1;

    while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]==target){
            res=mid;
        if(findf){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
        }
        else if(nums[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return res;
  }
};