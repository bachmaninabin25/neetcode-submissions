class Solution {
public:
    int x;
    int i;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int, int> freq;
        for (i = 0; i < nums.size(); i++) {
            x = nums[i];
            freq[x]++;
        }

        vector<pair<int,int>> v(freq.begin(), freq.end());
        sort(v.begin(),v.end(), [](auto&a, auto&b) {
            return a.second > b.second;
        });
        vector <int> results;
        for (int i = 0; i < k; i++) {
            results.push_back(v[i].first);
        }
        return results;
    }
};
