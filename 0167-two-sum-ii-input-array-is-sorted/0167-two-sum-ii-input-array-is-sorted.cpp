class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int n = numbers.size();
      int l=0;
      int r=n-1;

      while(l<r){
        int t=numbers[l]+numbers[r];
        if(t==target)
        {
         return{l+1,r+1};
        }
        else if(t>target)
        {
            r--;
        }
        else
        {
            l++;
        }
       
      }
       return {-1,-1};
    }
};