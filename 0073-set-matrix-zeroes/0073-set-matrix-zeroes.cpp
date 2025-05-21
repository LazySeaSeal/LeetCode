class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> col0, row0;
        const int n=matrix.size(), m=matrix[0].size();
        row0.reserve(n), col0.reserve(m);
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++){
                if (matrix[i][j]==0){
                    if(row0.count(i)==0) row0.insert(i);
                    if(col0.count(j)==0) col0.insert(j);
                }
            }
        for(int i: row0)
            for(int j=0; j<m; j++)
                matrix[i][j]=0;
        for(int j: col0)
            for(int i=0; i<n; i++)
                matrix[i][j]=0;
    }
};