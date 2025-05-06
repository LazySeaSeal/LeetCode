class Solution {
public:
    vector<int> buildArray(vector<int>& v) {
        vector<int> res(v.size());
        for(int i=0;i<v.size();i++)
            res[i]=v[v[i]];
        return res;
        
    }
};