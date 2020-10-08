#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n, mn, cnt;
    vector<int> v;
    string s[15];

    while(cin >> n, n)
    {
        cin.ignore();
        v.clear();

        mn = INT_MAX;

        for(int i = 0; i < n; i++)
        {
            getline(cin, s[i]);
            cnt = 0;
            for(char c : s[i])
            {
                if(c != 'X')
                {
                    cnt++;
                }
            }
            v.push_back(cnt);
            mn = min(cnt, mn);
        }

        cnt = 0;
        for(int x : v)
        {
            cnt += x-mn;
        }
        cout << cnt << endl;
    }
    return 0;
}
