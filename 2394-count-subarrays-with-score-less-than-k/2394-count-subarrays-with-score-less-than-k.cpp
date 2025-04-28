class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        vector<long long> sum = {0};
        long long ans=0;
        int l=0;
        for(int i=1;i<=nums.size();i++){
            sum.push_back(sum.back()+nums[i-1]);
            while(l<i && (sum[i]-sum[l])*(i-l)>=k){
                l++;
            }
            ans+=i-l;
        }
        return ans;
    }
};