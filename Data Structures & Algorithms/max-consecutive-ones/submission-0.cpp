class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> consec;
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 1) {
                consec.push_back(j);
                j = 0;
            } else {
                j += 1;
            }
        }
        consec.push_back(j);
        return *max_element(consec.begin(), consec.end());
    }
};