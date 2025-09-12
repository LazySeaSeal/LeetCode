class Solution {
public:
    bool doesAliceWin(string s) {
        int ans=0;
        unordered_map<char,int> umap;
        umap['a']=1;
        umap['e']=1;
        umap['i']=1;
        umap['o']=1;
        umap['u']=1;
        for(int i=0;i<s.size();i++)
            ans+=(umap[s[i]]);
        
        if (ans==0)
            return false;
        return true;
    
        
    }
};