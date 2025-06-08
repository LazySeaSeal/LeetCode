class Solution {
public:
     int maxSubArray(vector<int>& v) {
        int res=INT_MIN,sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
            res=max(sum,res);
            if(sum<0)
                sum=0;
        }
        return res;
        
    }
};