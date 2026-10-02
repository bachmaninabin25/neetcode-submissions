class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string pre = strs[0];
    for (auto& s : strs) {
        int i = 0;
        while (i < pre.size() && i < s.size() && pre[i] == s[i]) i++;
        pre.resize(i);
    }
    return pre;
}
};