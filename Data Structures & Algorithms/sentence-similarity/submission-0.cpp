class Solution {
public:
    bool areSentencesSimilar(vector<string>& sentence1, vector<string>& sentence2, vector<vector<string>>& similarPairs) {
        if (sentence1.size() != sentence2.size()) return false;
        unordered_map<string, unordered_set<string>> pairs;

        for (auto& pair : similarPairs) {
            pairs[pair[0]].insert(pair[1]);
            pairs[pair[1]].insert(pair[0]);
        }

        for (int i = 0; i < sentence1.size(); i++) {
            if (sentence1[i] != sentence2[i] && !pairs[sentence1[i]].count(sentence2[i])){
                return false;
            }
        }

        return true;
    }
};