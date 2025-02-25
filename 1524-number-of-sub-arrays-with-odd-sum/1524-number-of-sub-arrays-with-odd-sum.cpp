class Solution {
public:
  const int MOD = 1e9 + 7;
    int numOfSubarrays(vector<int>& arr) {
      

    long long oddCount = 0, evenCount = 1, prefixSum = 0, result = 0;

    for (int num : arr) {
       
        prefixSum += num;
       
        if (prefixSum % 2 == 1) {
            result += evenCount;
            oddCount++;
        }
       
        else {
            result += oddCount;
            evenCount++;
        }

        result %= MOD;
    }

    return result;
}
};