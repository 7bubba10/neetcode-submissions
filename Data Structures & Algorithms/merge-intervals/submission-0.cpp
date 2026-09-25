class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> results;
        sort(intervals.begin(), intervals.end());
        vector<int> current = intervals[0];

        for (int i = 1; i < intervals.size(); i++) {
            vector<int> next = intervals[i];
            if(next[0] <= current[1]) {
                current[1] = max(current[1],next[1]);
            }
            else {
                results.push_back(current);
                current = next;
            }
        }
        results.push_back(current);

        return results;
    }
};
