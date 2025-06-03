class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        vector<vector<int>> res;
        sort(v.begin(),v.end());
        int d=v[0][0],f=v[0][1];
        for(int i=1;i<v.size();i++)
        {

            int d1=v[i][0],f1=v[i][1];
            if (f>=d1)
                f=max(f,f1);
            else
                {
                    res.push_back({d,f});
                    if (i<v.size())
                    {
                        d=v[i][0];
                        f=v[i][1];
                    }
                }
        }
        res.push_back({d,f});
        return res;   
    }
};