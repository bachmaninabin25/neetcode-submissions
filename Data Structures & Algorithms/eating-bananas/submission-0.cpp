class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // can Koko finish everything within h hours eating k per hour?
        auto ok = [&](long long k) {
            long long hours = 0;                       // long long: can reach ~1e13
            for (int p : piles) hours += (p + k - 1) / k;   // ceil(p / k)
            return hours <= h;                         // <= because exactly h is allowed
        };

        long long lo = 1, hi = *max_element(piles.begin(), piles.end());
        while (lo < hi) {
            long long mid = lo + (hi - lo) / 2;   // round DOWN: searching for the FIRST yes
            if (ok(mid)) hi = mid;      // mid works, so the answer is mid or smaller
            else lo = mid + 1;          // mid fails, so the answer is bigger than mid
        }
        return lo;
    }
};
    