class Solution {
public:
   vector<int> twoSum(vector<int>& v, int x) {
    unordered_map<int,int> umap;
    for(int i=0;i<v.size();i++)
        umap[v[i]]=i;
    for(int i=0;i<v.size();i++)
    {
        if (umap[x-v[i]] && i!=umap[x-v[i]]) // found
            return {i,umap[x-v[i]]};
    }
    return {};

}
};