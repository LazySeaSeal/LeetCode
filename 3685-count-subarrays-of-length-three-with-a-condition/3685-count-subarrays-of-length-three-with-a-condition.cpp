class Solution {
public:
    int countSubarrays(vector<int>& v) {
        int res=0;
        for(int i=0;i<(v.size()-2);i++)
        res+=(v[i]+v[i+2])==((v[i+1]*1.0)/2);
        return res;
    }
};