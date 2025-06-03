class Solution {
public:
int lengthOfLongestSubstring(string s)
{
    int d = 0, res = 0;
    unordered_set<char> a;
    for (int f = 0; f < s.size(); f++)
    {
            while (f > d && (a.find(s[f]) != a.end()))
        {
            a.erase(s[d++]);
        }
        a.insert(s[f]);
        int x = a.size();
        res = max(res, x);
    }
    return res;
}
};