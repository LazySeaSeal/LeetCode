class Solution {
public:
    bool dfs(vector<vector<char>>& v, vector<vector<int>>& vis, int i, int j, string& s, int x) {
        if (x == s.size()) 
          return true;
        if (i < 0 || j < 0 || i >= v.size() || j >= v[0].size() || vis[i][j] || v[i][j] != s[x])
            return false;
        vis[i][j] = 1;
        bool a = dfs(v, vis, i + 1, j, s, x + 1) ||
                     dfs(v, vis, i - 1, j, s, x + 1) ||
                     dfs(v, vis, i, j + 1, s, x + 1) ||
                     dfs(v, vis, i, j - 1, s, x + 1);

        vis[i][j] = 0; 
        return a;
    }

    bool exist(vector<vector<char>>& v, string s) {
        int n=v.size();
        int m=v[0].size();
        vector<vector<int>> vis(n,vector<int>(m));
        for(int i = 0; i < n; i++) 
            for(int j = 0; j < m; j++) 
                if (dfs(v, vis, i, j, s, 0))
                    return true;
            
        return false;
    }
};
