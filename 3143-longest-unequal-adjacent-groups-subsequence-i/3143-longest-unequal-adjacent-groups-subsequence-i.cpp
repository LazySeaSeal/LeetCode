class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& a, vector<int>& v) {
     vector<string> res;
        int b=v[0];
        res.push_back(a[0]);
        for(int i=1;i<v.size();i++)
            if (v[i]!=b)
            {
                res.push_back(a[i]);
                b=!b;
            }
        return(res);
    }
};