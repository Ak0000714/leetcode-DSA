class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0)
            return "";

        std::vector<std::vector<bool>> dp(n, std::vector<bool>(n, false));
        int start = 0;
        int maxLength = 1;

        for (int i = 0; i < n; ++i) {
            dp[i][i] = true;
        }

        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == s[i + 1]) {
                dp[i][i + 1] = true;
                start = i;
                maxLength = 2;
            }
        }

        for (int length = 3; length <= n; ++length) {
            for (int i = 0; i < n - length + 1; ++i) {
                int j = i + length - 1;
                if (s[i] == s[j] && dp[i + 1][j - 1]) {
                    dp[i][j] = true;
                    start = i;
                    maxLength = length;
                }
            }
        }
        
        return s.substr(start, maxLength);
    }
};
