#include <bits/stdc++.h>

using namespace std;

#define mx 111

int dp[mx][mx];

int LCS(int i, int j, int a[], int b[]);

int main()
{
    //freopen("input.txt", "r", stdin);

    int n, x;
    int a[mx], b[mx];

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        a[x] = i;
    }
    while(cin >> x)
    {
        b[x] = 1;

        for(int i = 2; i <= n; i++)
        {
            cin >> x;
            b[x] = i;
        }

        memset(dp, -1, sizeof(dp));

        int x = LCS(n, n, a, b);

        cout << x << endl;
    }

    return 0;
}

int LCS(int i, int j, int a[], int b[])
{

    if(i == 0 || j == 0)
    {
        return 0;
    }

    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }

    int x = 0;

    if(a[i] == b[j])
    {
        return x = 1 + LCS(i-1, j-1, a, b);
    }
    else
    {
        int v1 = LCS(i-1, j, a, b);
        int v2 = LCS(i, j-1, a, b);

        x = max(v1, v2);
    }
    dp[i][j] = x;
    return x;
}
