class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size() - 1;
        int maxWater = 0;

        while (left < right) {
            int water = min(heights[left], heights[right]) * (right - left);
            maxWater = max(maxWater, water);

            if (heights[left] < heights[right])
                left++;
            else
                right--;
        }

        return maxWater;
    }
};