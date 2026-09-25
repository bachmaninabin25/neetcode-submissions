class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        sort(nums.begin(), nums.end());
        
        int maxStreak = 1, curStreak = 1;
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1]) continue; // skip dupes
            if (nums[i] == nums[i-1] + 1) {
                curStreak++;
            } else {
                maxStreak = max(maxStreak, curStreak);
                curStreak = 1;
            }
        }
        
        return max(maxStreak, curStreak); // don't forget the last streak
    }
};