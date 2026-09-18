class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector <int> vector2(2);
    int i;
    int j;
        for (i = 0;i < nums.size(); i++) {
            for (j = i+1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    vector2[0] = i;
                    vector2[1] = j;
                    return vector2;
                }
            }
            
        }
    }
};
