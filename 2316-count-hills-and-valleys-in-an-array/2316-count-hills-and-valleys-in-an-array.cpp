class Solution {
public:
    int countHillValley(vector<int>& t) {
        vector<int> v;
        int res=0;
        v.push_back(t[0]);
        for(int i=1;i<t.size();i++)
            if ( v.back()!=t[i])
                v.push_back(t[i]);
        for(int i=1;i<v.size()-1;i++)
            res+=((v[i-1]<v[i] && v[i+1]<v[i])|| (v[i-1]>v[i] && v[i+1]>v[i]));
        return res;              
    }
};