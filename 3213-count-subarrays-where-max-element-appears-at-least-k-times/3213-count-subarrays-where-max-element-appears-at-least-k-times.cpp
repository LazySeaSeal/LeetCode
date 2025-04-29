class Solution {
public:
    long long countSubarrays(vector<int>& v, int k) {
        long long res = 0;
        int n = v.size(), cnt = 0, l = 0;
        int mx = *max_element(v.begin(), v.end());

        for (int r = 0; r < n; r++) {
            if (v[r] == mx) cnt++;
            while (cnt == k) {
                res += n - r;
                if (v[l++] == mx) cnt--;
            }
        }
        return res;
    }
};