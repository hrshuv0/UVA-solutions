#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, m, n, c, i, j, l, p, q;

    cin >> t;

    while(t--)
    {
        cin >> m >> n;
        p = q = 0;

        for(j = m; j <= n; j++)
        {
            c = 0;
            l = sqrt(j);

            for(i = 1; i <= l; i++)
            {
                if(j % i == 0)
                {
                    c++;
                }
            }

            c = c * 2;

            if(j == l*l)
            {
                c--;
            }

            if(q < c)
            {
                p = j;
                q = c;
            }
        }

        cout << "Between " << m << " and " << n << ", " << p << " has a maximum of " << q << " divisors." << endl;
    }

    return 0;
}
