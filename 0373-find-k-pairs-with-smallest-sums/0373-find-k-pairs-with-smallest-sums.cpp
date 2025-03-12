class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> result;

    
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> minHeap;

   
    for (int i = 0; i < min(k, (int)nums1.size()); ++i) {
        minHeap.push({nums1[i] + nums2[0], i, 0}); 
    }


    while (k > 0 && !minHeap.empty()) {
       
        vector<int> current = minHeap.top();
        minHeap.pop();

        result.push_back({nums1[current[1]], nums2[current[2]]});

       
        if (current[2] + 1 < nums2.size()) {
            minHeap.push({nums1[current[1]] + nums2[current[2] + 1], current[1], current[2] + 1});
        }

       
        --k;
    }

    return result;
    }
};