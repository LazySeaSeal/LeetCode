class Solution {
public:
    void sortColors(vector<int> &v)
    {
    int i = 0;
    for (int j = 0; j < v.size(); j++)
        if (v[j] == 0)
            swap(v[i++], v[j]);
    for (int j = i; j < v.size(); j++)
        if (v[j] == 1)
            swap(v[i++], v[j]);
    }
};