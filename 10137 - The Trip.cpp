#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t, n;
    vector<double> v;

    while(cin>>t, t)
    {
        v.clear();
        n = t;
        double x, s = 0, m;
        while(t--)
        {
            cin >> x;
            v.push_back(x);
            s += x;
        }
        m = s/n;

        double p = 0;
        double n = 0;
        for(double i:v)
        {
            x = (long)((i-m)*100.0)/100.0;
            if(x > 0)
            {
                p += x;
            }
            else
            {
                n += abs(x);
            }
        }

        cout << fixed << setprecision(2) << "$" << max(p,n) << endl;
    }

    return 0;
}
