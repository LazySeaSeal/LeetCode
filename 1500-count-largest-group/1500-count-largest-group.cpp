class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int> umap;
        int m=0,res=0;
        for(int i=1;i<(n+1);i++)
        {
            int x=0;
            string s=to_string(i);
            for(char c:s)
                x+=(c-'0');
            umap[x]++;
            m=max(m,umap[x]);
        }
        for(auto &it:umap)
            res+=(it.second==m);
        return res;        
    }
};