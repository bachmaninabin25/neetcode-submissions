class Solution {
public:
    int countSeniors(vector<string>& details) {
        int x = 0;
        for (int i = 0;i<details.size();i++) {
            string y = details[i].substr(11,2);
            int g = stoi(y);
            if (g > 60){
                x += 1;
            }
         }
        return x;
    }
};