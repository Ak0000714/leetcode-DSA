class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char, int> freq;
        int left = 0, count = 0;

        for (int right = 0; right < s.size(); right++) {
            freq[s[right]]++; 
     
            while (freq['a'] > 0 && freq['b'] > 0 && freq['c'] > 0) {
                count += (s.size() - right); 
                freq[s[left]]--;
                left++; 
            }
        }
        return count;
    }
};
