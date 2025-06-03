class Solution {
public:
    int maxProfit(vector<int>& v) {
        int d=0,f,res=0;
    int low=v[0];
    for(int i=1;i<v.size();i++)
        {
            res=max(res,v[i]-low);
            low=min(low,v[i]);
        }
        return res;

}
};