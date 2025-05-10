using ll = long long;

class Solution {
public:
    ll minSum(vector<int>& v1, vector<int>& v2) {
        ll s1 = accumulate(v1.begin(), v1.end(), 0LL);
        ll s2 = accumulate(v2.begin(), v2.end(), 0LL);
        ll nbz1 = count(v1.begin(), v1.end(), 0);
        ll nbz2 = count(v2.begin(), v2.end(), 0);
        if (s2 > s1) {
            swap(s1, s2); swap(nbz1, nbz2);
        }
        if (!nbz1 && !nbz2) return (s1 == s2 ? s1 : -1);
        if (!nbz2 || (!nbz1 && s2 + nbz2 > s1)) return -1;
        if (s1 == s2) return s1 + max(nbz1, nbz2);
        if (nbz1 >= nbz2) return s1 + nbz1;
        return max(s1 + nbz1, s2 + nbz2);
    }
};