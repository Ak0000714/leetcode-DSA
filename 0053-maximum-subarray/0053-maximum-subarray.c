int maxSubArray(int* nums, int numsSize) {
if (numsSize == 0) {
        return 0;  
    }

    int max_so_far = INT_MIN;  
    int max_ending_here = 0;  

    for (int i = 0; i < numsSize; i++) {
        max_ending_here = max_ending_here + nums[i]; 
        
        if (max_so_far < max_ending_here) { 
            max_so_far = max_ending_here;
        }
        
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
    }
    
    return max_so_far;  
}