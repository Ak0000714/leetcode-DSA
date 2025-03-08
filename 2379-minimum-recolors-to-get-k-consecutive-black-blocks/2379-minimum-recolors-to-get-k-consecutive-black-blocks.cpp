class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int mini = INT_MAX;
        int countw = 0;

        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W') {
                countw++;
            }
            mini = countw;
        }

        for (int i = k; i < n; i++) {
            if (blocks[i - k] == 'W') {
                countw--;
            }
            if (blocks[i] == 'W') {
                countw++;
            }
            mini = min(mini, countw);
        }
        return mini;
    }
};