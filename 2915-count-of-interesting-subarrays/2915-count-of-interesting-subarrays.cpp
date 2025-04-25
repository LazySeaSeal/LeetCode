class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        map<int,int> freq;
        int cur=0;
        freq[0]++;
        long long ans=0;
        for(auto &u:nums){
            cur+=(u%modulo)==k;
            ans+=freq[(cur-k+modulo)%modulo];
            freq[cur%modulo]++;
        }
        return ans;
    }
};