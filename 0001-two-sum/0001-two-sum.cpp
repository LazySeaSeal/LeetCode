class Solution {
public:
   vector<int> twoSum(vector<int>& v, int a) {
    unordered_map<int,int> umap;
    int need=0;
        for(int i=0;i<v.size();i++)
            {
                need=a-v[i];
                if((umap.find(need) != umap.end()) && umap[need]!=i)
                    return {i,umap[need]};
                umap[v[i]]=i;

            }
 
    return {};

}
};