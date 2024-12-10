class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int candi=0;
        
        for( int i:nums){
            if(count==0){
                candi=i;
            }
            if(i==candi){
                count++;
                
            }
            else{
                count--;
            }
            
        }
        return candi;
    }
};