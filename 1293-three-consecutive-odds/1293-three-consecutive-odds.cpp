class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& v) {
        int n=v.size();
        if (n<3)
            return false;
        for(int i=0;i<n-2;i++)
                if (v[i]%2 && v[i+1]%2 && v[i+2]%2)
                    return true;
        return false;
        
    }
};