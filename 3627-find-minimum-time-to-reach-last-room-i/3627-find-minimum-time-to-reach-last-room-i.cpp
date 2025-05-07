inline const auto optimize = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
int dijkstra(vector<vector<int>> &v, int n, int m)
{
    bool visited[n][m];
    vector<int> dir = {-1, 0, 1, 0, -1};
    int res[n][m];
    res[0][0]=0;
    memset(visited, 0, sizeof(visited));
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> minHeap; // (t,i,j)
    minHeap.push({0, 0, 0});
    while (!minHeap.empty())
    {
        vector<int> a = minHeap.top();
        minHeap.pop();
         if(visited[a[1]][a[2]])continue;
        visited[a[1]][a[2]] = 1; // mark as visited
        if (a[1] == n - 1 && a[2] == m - 1)
            return a[0];
        for (int x = 0; x < 4; x++)
        {
            int l = a[1] + dir[x];
            int c = a[2] + dir[x + 1];
            if ((l < n && l >= 0 && c < m && c >= 0) && !visited[l][c])
            {
                res[l][c] = max(a[0], v[l][c]) + 1; // max mebin il time w il time ali bech nelchi + 1
                minHeap.push({res[l][c], l, c});
            }
        }
    }
    return -1;
}

int minTimeToReach(vector<vector<int>> &v)
{
    int n = v.size(), m = v[0].size();
    return dijkstra(v, v.size(), v[0].size());
}
};