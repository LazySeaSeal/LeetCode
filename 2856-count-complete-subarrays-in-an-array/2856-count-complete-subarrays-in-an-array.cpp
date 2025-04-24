class Solution {
public:
    int countCompleteSubarrays(vector<int> &v)
{
    unordered_set<int> us;
    unordered_multiset<int> ms;
    for (int &i : v)
        us.insert(i);
    int n = us.size(), res = 0,curr = 0,d = 0;
    for (int f = 0; f < v.size(); f++)
    {
        if (!ms.count(v[f])) //not there
            curr++;
        ms.insert(v[f]);
        while (curr == n)
        {
            res += (v.size() - f) ;
            if (ms.count(v[d]) == 1)
                curr--;
            ms.erase(ms.find(v[d++]));
        }
    }
    return res;
}
};