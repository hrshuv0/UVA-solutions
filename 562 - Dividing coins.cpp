#include <bits/stdc++.h>

using namespace std;

#define mx 111111

int dp[mx];
int divide(int ar[], int n, int k);

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int t, n, half, s;
    int ar[mx];

    cin >> t;
    while(t--)
    {
        s = 0;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> ar[i];
            s += ar[i];
        }
        half = s / 2;

        int x = divide(ar, n, half);

        cout << s-(2*x) << endl;
    }
    return 0;
}

int divide(int ar[], int n, int k)
{
    memset(dp, 0, sizeof(dp));

    for(int i = 1; i <= n; i++)
    {
        for(int j = k; j > 0; j--)
        {
            if(ar[i] <= j)
            {
                dp[j] = max(dp[j], ar[i] + dp[j - ar[i]]);
            }
        }
    }
    return dp[k];
}
