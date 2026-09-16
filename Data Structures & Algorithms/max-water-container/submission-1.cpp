class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int max = 0;

        while (left < right) {
            int width = abs(left - right);
            int height = min(heights[left], heights[right]);
            int area = width * height;

            if (area > max) max = area;

            if (heights[left] < heights[right]) {
                left++;
            }
            else {
                right--;
            }

        }
        return max;
        
    }
};
