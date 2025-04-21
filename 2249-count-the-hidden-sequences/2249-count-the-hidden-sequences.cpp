class Solution {
public:
int numberOfArrays(vector<int> &v, int l, int u)
{
    long long d = l, f = u; // max(d) min(f)
    long long sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
        d = max(d, l - sum);
        f = min(f, u - sum);
    }
    if (d>f)
        return 0;
    return abs(f - d) + 1;
}
};