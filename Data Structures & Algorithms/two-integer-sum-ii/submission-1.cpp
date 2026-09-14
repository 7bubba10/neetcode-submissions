class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int front = 0;
        int back = numbers.size() - 1;
        vector<int> results;

        while (front < back) {
            if (numbers[front] + numbers[back] < target){
                front++;
            }
            else if (numbers[front] + numbers[back] > target){
                back--;
            }
            else {
                return {front + 1, back + 1};
            }
        }
        
        
    }
};
