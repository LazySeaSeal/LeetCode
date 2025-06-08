class Solution {
public:
   vector<int> plusOne(vector<int>& v) {
        int carry=1;
        int n=v.size();
        for(int i=n-1;i>=0;i--)
        {
            if (!carry)
                break;
            if ((v[i]+carry)>9)
                    v[i]=0;
            else
                {
                    v[i]++;
                    carry=0;
                }
        }
        if (!carry)
            return v;
        vector<int> res(n+1);
        res[0]=1;
        for(int i=1;i<=n;i++)
            res[i]=v[i-1];
        return res;
   }
   
};