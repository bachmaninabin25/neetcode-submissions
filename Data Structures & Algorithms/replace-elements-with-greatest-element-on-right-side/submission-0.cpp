class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
    vector<int> x(arr.size()); 
    for (int i = 0; i < arr.size()-1; i++) {
        x[i] = *max_element(arr.begin()+i+1,arr.end());

        }
    x[arr.size()-1] = -1;
    return x;
    
    
    }
};