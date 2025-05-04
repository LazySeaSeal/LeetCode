class Solution {
public:
 int numEquivDominoPairs(vector<vector<int>> &v)
{
    map<pair<int, int>, int> umap;
    int res = 0;
    for (auto &it : v)
    {
        pair<int, int> p = {min(it[0], it[1]), max(it[0], it[1])};
        umap[p]++;
    }
    for(auto &it:umap)
        res+=((it.second)*(it.second-1))/2;
    return res;
}
};