class Solution {
public:
int f(vector<int> &a, vector<int> &b)
{
    unordered_map<int, int> umap;
    if (a[0] != b[0])
    {
        umap[a[0]] = 0;
        umap[b[0]] = 1;
    }
    else
        umap[a[0]] = 0;

    for (int i = 1; i < a.size(); i++)
        if (a[i] == b[i])
        {
            if (umap.find(a[i]) == umap.end())
                return -1;
            for (auto it = umap.begin(); it != umap.end();) // faskhnehum il kol ken il a;
            {
                if (it->first != a[i])
                    it = umap.erase(it);
                else
                    ++it;
            }
        }
        else
        {
            if (umap.find(b[i]) == umap.end() && umap.find(a[i]) == umap.end())
                return -1;
            if (umap.find(b[i]) != umap.end())
                umap[b[i]]++;
            for (auto it = umap.begin(); it != umap.end();)
            {
                if (it->first != a[i] && it->first != b[i])
                    it = umap.erase(it);
                else
                    ++it;
            }
    }
    int res = a.size();
    for (auto &it : umap)
        res = min(res, it.second);
    return res;
}
int minDominoRotations(vector<int> &a, vector<int> &b)
{
    return (min(f(a, b), f(b, a)));
}
};