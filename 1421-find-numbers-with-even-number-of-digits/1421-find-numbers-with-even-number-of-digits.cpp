class Solution {
public:
    int findNumbers(vector<int>& v) {
        int res=0;
        for(int &a:v)
            res+=(to_string(a).size()%2==0);
        return res;
        
    }
};