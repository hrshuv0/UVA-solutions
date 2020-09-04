#include <bits/stdc++.h>

using namespace std;

int maximumwining(vector<int> v);

int main()
{
    int t, x;
    vector<int> v;

    while(cin >> t, t)
    {
        v.clear();

        while(t--)
        {
            cin >> x;
            v.push_back(x);
        }

        x = maximumwining(v);

        if(x > 0)
        {
            cout << "The maximum winning streak is " << x << "." << endl;
        }
        else
        {
            cout << "Losing streak." << endl;
        }
    }

    return 0;
}

int maximumwining(vector<int> v)
{
    int a = 0, ans = INT_MIN;

    for(int x : v)
    {
        a += x;
        ans = max(a, ans);
        a = max(a, 0);
    }
    return ans;
}
