class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_set<int> s;
        int rep = -1;
        int sum = 0;

        for (int i = 1; i <= n * n; i++) {
            sum += i;
        }

        int actualsum = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int val = grid[i][j];
                if (s.find(val) != s.end()) {
                    rep = val;
                } else {
                    s.insert(val);
                }
                actualsum += val;
            }
        }
        int miss = sum - actualsum + rep;
        return {rep,miss};
    }
};