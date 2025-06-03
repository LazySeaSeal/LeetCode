class Solution {
public:
   vector<int> productExceptSelf(vector<int> &v)
{
    vector<int> res(v.size(), 1);
    res[0] = v[0];
    int n = v.size();
    for (int i = 1; i < n; i++)
        res[i] *= res[i - 1] * v[i];
    int s = v[n - 1];
    res[n - 1] = res[n - 2];
    for (int i = 1; i < (n-1); i++)
    {
        res[n - i - 1] = res[n - i - 2] * s;
        s *= v[n - i - 1];
    }
    res[0] = s;
    return res;
}
};