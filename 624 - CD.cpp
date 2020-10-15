#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > subset(vector<int> v);

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int w, n, x;
    vector <int> v;

    while(cin >> w)
    {
        cin >> n;
        while(n--)
        {
            cin >> x;
            v.push_back(x);
        }
        vector<vector< int> > temp = subset(v);
        v.clear();

        int c, mx = INT_MIN, ans;

        for(int i = 0; i < temp.size(); i++)
        {
            c = 0;
            for(int j = 0; j < temp[i].size(); j++)
            {
                c += temp[i][j];
            }
            if(c <= w)
            {
                mx = max(c, mx);
            }
        }

        int j;
        for(int i = 0; i < temp.size(); i++)
        {
            c = 0;
            for(int j = 0; j < temp[i].size(); j++)
            {
                c += temp[i][j];
            }

            if(c == mx)
            {
                j = i;
                break;
            }
        }

        for(int i = 0; i < temp[j].size(); i++)
        {
            cout << temp[j][i] << " ";
        }

        cout << "sum:" << mx << endl;
    }

    return 0;
}
void subsetUtil(vector<int>&v, vector<vector<int> >& res, vector<int>& subset, int index)
{
    res.push_back(subset);

    for(int i = index; i < v.size(); i++)
    {
        subset.push_back(v[i]);
        subsetUtil(v, res, subset, i+1);
        subset.pop_back();
    }
}
vector<vector<int> > subset(vector<int> v)
{
    vector<vector< int> > res;
    vector<int> subset;

    subsetUtil(v, res, subset, 0);

    return res;
}
