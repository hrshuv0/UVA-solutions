#include <bits/stdc++.h>

using namespace std;

#define mx 33333

bool prime[mx];

void seave();

int main()
{
    seave();
    int n, i, j, c;

    while(cin >> n, n)
    {
        c = 0;
        i = 2;

        while(i <= n/2)
        {
            if(prime[i] && prime[n-i])
            {
                c++;
            }
            i++;
        }
        cout << c << endl;
    }
}

void seave()
{
    memset(prime, true, sizeof(prime));

    for(int j = 2; j * j <= mx; j++)
    {
        if(prime[j])
        {
            for(int i = j*j; i <= mx; i += j)
            {
                prime[i] = false;
            }
        }
    }
}
