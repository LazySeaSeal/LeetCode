class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        int d=0,f=s.size()-1;
        while(d<f && s[d]==s[f])
        {
            d++;
            f--;
        }
        return (d >= f);
        
    }
};