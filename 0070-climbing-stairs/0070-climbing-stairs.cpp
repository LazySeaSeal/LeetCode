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
        return f(0,n);  
    }
};