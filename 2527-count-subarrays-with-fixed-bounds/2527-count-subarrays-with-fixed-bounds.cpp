class Solution {
public:
    long long countSubarrays(vector<int>& v, int mn, int mx) {
        long long res = 0;
        int n = v.size(), mxi = -1, mni = -1, outi = -1;
        
        for (int i = 0; i < n; i++) {
            if (v[i] > mx || v[i] < mn) {
                outi = i; mxi = mni = -1;
            }
            if (v[i] == mn) mni = i;
            if (v[i] == mx) mxi = i;
            if (mxi != -1 && mni != -1) {
                res += abs(min(mxi, mni) - outi);
            }
        }
        return res;
    }
};