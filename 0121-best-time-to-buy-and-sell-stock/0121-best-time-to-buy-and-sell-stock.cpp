class Solution {
public:
    int maxProfit(vector<int>& v) {
        int d=0,f,res=0;
    while(d<v.size()-1)
   {
        for(f=d+1;f<v.size();f++)
        {
            int diff=v[f]-v[d];
            if (diff>=0)
                res=max(res,diff);
            else
                break;
        }
        d=f;
   }
   return(res);

}
};