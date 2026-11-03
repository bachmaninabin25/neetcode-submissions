class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(), cols = matrix[0].size();

        // STEP 1: binary search over rows
        int top = 0, bot = rows - 1, row = -1;
        while (top <= bot) {
            int mid = top + (bot - top) / 2;
            if (target < matrix[mid][0]) bot = mid - 1;               // above this row
            else if (target > matrix[mid][cols - 1]) top = mid + 1;   // below this row
            else { row = mid; break; }                                // it's in this row
        }
        if (row == -1) return false;   // no row fits

        // STEP 2: normal binary search inside that row
        int l = 0, r = cols - 1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (matrix[row][m] == target) return true;
            if (matrix[row][m] < target) l = m + 1;
            else r = m - 1;
        }
        return false;
    }
};