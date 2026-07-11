class Solution {
public:
   vector<int> twoSum(vector<int>& v, int a) {
    unordered_map<int,int> umap;
        for(int i=0;i<v.size();i++)
            umap[v[i]]=i;
    for(int i=0;i<v.size();i++)
        if (umap[a-v[i]] && umap[a-v[i]]!=i)
            return {i,umap[a-v[i]]};

    return {};

}
};