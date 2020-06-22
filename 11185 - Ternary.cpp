#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long int n;
    int x[1111], i;

    while(cin >> n && n >= 0)
    {
        //cout << n << endl;

        if(n == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            i = 1;
            while(n!=0)
            {
                x[i] =  n%3;
                n = n / 3;
                i++;
            }

            for(int j = i-1; j > 0; j--)
            {
                cout << x[j];
            }
            cout << endl;
        }
    }
    return 0;
}

