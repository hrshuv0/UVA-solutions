#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b);

int main()
{
    int n, i, j, G;

    while(cin >> n, n)
    {
        G=0;
        for(i=1; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                G+=gcd(i,j);
            }
        }
        cout << G << endl;
    }

    return 0;
}

int gcd(int a, int b)
{
    return __gcd(a, b);
}
