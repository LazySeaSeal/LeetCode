class Solution {
public:
    int maxProfit(vector<int>& v) {
        int d=0,f,res=0;
       for(int i=0;i<v.size();i++)
        for(int j=i+1;j<v.size();j++)
            {
                if (v[j]-v[i]>0)
                    res=max(res,v[j]-v[i]);
                else
                    break;
            }
    return res;

}
};