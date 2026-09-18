class Solution {
public:
    bool isAnagram(string s, string t) {
            string x;
            string y;

            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            return s == t;
    }
};
