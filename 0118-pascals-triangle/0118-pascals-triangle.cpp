class Solution {
public:
    vector<vector<int>> generate(int n) {
    vector<vector<int>> v(n);
      for(int i=0;i<n;i++)
        {
            vector<int> a(i+1);
            a[0]=1;
            a[i]=1;
            v[i]=a;
        }
    for(int i=2;i<n;i++)
    {
        for(int j=1;j<v[i].size()-1;j++)
            v[i][j]=v[i-1][j]+v[i-1][j-1];

    }
    return v;



    }
};