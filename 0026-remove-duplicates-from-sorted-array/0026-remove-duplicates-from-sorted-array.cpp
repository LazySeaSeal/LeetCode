class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        set<int> s;
        for(int &i:v)
            s.insert(i);
        int i=0;
        for(auto &a:s)
            v[i++]=a;
        return s.size();

    }
};