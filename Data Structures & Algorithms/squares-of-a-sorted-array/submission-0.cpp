class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squares;
        for (int i = 0; i < nums.size(); i++) {
            int square = nums[i] * nums[i];
            squares.push_back(square);
        }

        sort(squares.begin(),squares.end());
        return squares;
    }
};