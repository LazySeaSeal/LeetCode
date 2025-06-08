class Solution {
public:
    vector<int> dp;
    int f(int i,int &n)
    {
        if (i==n)
            return 1;
        if (i>n)
            return 0;
        if (dp[i])
            return dp[i];
        dp[i]=f(i+1,n)+f(i+2,n); 
        return dp[i];
    }
    int climbStairs(int n) {
        this->dp=vector<int>(n + 1);
        dp[n]=1;
        for(int i=n-1;i>=0;i--)
            {
                if (i+1<=n)
                    dp[i]+=dp[i+1];
                if (i+2<=n)
                    dp[i]+=dp[i+2];
            }
        return dp[0];  
    }
};