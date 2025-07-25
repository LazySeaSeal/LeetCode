class Solution {
public:
    int maxSum(vector<int>& v) {
        unordered_map<int,int> umap;
        int res=0;
        int joker=INT_MIN;
        for(int &x:v)
        {
            if (umap[x] || x<=0)
                {
                    if(x<=0)
                        joker=max(joker,x);
                    continue;
                }
            umap[x]++;
            res+=x;
        }
        if (res==0)
            return joker;
        return res;
        
    }
};