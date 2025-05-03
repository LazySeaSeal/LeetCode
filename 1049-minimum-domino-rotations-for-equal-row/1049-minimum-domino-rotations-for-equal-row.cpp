class Solution {
public:
int f(vector<int> &a, vector<int> &b)
{
    int res = INT_MAX;
    for (int j = 1; j < 7; j++)
    {
        int c = 0;
        int i = 0;
        for (; i < a.size(); i++)
        {
            if (a[i] != j && b[i] != j)
                break;
            if (a[i] != j)
                c += (b[i] == j);
        }
        if (i >= a.size())
            res = min(c, res);
    }
    if (res == INT_MAX)
        return -1;
    return res;
}
int minDominoRotations(vector<int> &a, vector<int> &b)
{
    return (min(f(a, b), f(b, a)));
}
};