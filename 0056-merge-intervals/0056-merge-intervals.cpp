class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};

        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });

        vector<vector<int>> mergedIntervals;
        mergedIntervals.push_back(intervals[0]);

        for (size_t i = 1; i < intervals.size(); ++i) {
            vector<int>& lastMerged = mergedIntervals.back();
            const vector<int>& current = intervals[i];

            if (current[0] <= lastMerged[1]) {
                lastMerged[1] = max(lastMerged[1], current[1]);
            } else {
                mergedIntervals.push_back(current);
            }
        }

        return mergedIntervals;
    }
};