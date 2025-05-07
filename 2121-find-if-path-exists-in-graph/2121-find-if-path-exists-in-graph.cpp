class Solution {
public:
   bool dfs(unordered_map<int, vector<int>> &umap, vector<int> &unvisited, int s, int d)
{
    unvisited[s] = 1;
    if (s==d)
        return true;
    for (int &x : umap[s])
        if (!unvisited[x])
         if (dfs(umap, unvisited, x, d))
                return true;
    return false;
}

bool validPath(int n, vector<vector<int>> &v, int s, int d)
{
    unordered_map<int, vector<int>> umap;
    vector<int> unvisited(n);
    for (auto &it : v)
    {
        umap[it[0]].push_back(it[1]);
        umap[it[1]].push_back(it[0]);
    }
    return (dfs(umap, unvisited, s, d));
}
};