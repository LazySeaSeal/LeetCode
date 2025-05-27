class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& v) {
    unordered_set<int> ligne;
    unordered_set<int> col;
    unordered_set<int> box;
    int n=v.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j]=='.')
                continue;
            int x=v[i][j]-'0';
            if (ligne.find(i + x * 10) != ligne.end())
                return false;
            if (col.find(j + x * 10) != col.end())
                return false;
            if (box.find((i/3) + 10 * (j/3) + 100 * x) != box.end())
                return false;

            ligne.insert(i + x * 10);         // lx
            col.insert(j + x * 10);           // cx
            box.insert((i/3) + 10 * (j/3) + 100 * x); // lcx
        }
    }
    return true;
    }
};