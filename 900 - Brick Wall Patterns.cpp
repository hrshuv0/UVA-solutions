#include <bits/stdc++.h>

using namespace std;

long long brick[55];

void solve();
int main()
{
    solve();
    int n;

    while(cin >> n, n)
    {
        cout << brick[n] << endl;
    }

    return 0;
}

void solve()
{
    brick[0] = 0;
    brick[1] = 1;
    brick[2] = 2;


    for(int i = 3; i <= 51; i++)
    {
        brick[i] = brick[i-1]+brick[i-2];
    }
}
