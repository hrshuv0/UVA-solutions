#include <bits/stdc++.h>

using namespace std;

#define mx 10001

void uva105(int height[]);

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);


    int l, h, r;
    int height[mx];

    memset(height, 0, sizeof(height));

    while(cin >> l >> h >> r)
    {
        for(int i = l; i < r; ++i)
        {
            height[i] = max(height[i], h);
        }
    }

    uva105(height);
    cout << endl;

    return 0;
}

void uva105(int height[])
{
    int current = 0;
    bool started = false;

    for(int i = 0; i < mx; ++i)
    {
        if(height[i] != current)
        {
            if(started)
            {
                cout << " ";
            }
            else{
                started = true;
            }

            cout << i << " " << height[i];
            current = height[i];
        }
    }
}
