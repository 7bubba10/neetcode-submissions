class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> results;
        for (int i = 0; i < arr.size() -1; i++) {
            int highest = -1;
            for (int j = i + 1; j < arr.size(); j++){ 
                if (arr[j] > highest) {
                    highest = arr[j];
                    
                }
                
            }
            results.push_back(highest);

        }
        results.push_back(-1);
        return results;
    }
};