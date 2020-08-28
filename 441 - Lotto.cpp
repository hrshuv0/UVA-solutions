#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int ar[55];
    int n, x, l, i, j, k;
    bool f = false;

    while(cin >> n, n)
    {
        if(f)
        {
            cout << endl;
        }
        f = true;
        for(i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }

        for(int k1 = 0; k1 < n - 5; k1++)
        {
            for(int k2 = 1; k2 < n-4; k2++)
            {
                for(int k3 = 2; k3 < n-3; k3++)
                {
                    for(int k4 = 3; k4 < n-2; k4++)
                    {
                        for(int k5 = 4; k5 < n-1; k5++)
                        {
                            for(int k6 = 5; k6 < n; k6++)
                            {
                                if(k1 < k2 && k2 < k3 && k3 < k4 && k4 < k5 && k5 < k6)
                                {
                                    printf("%d %d %d %d %d %d\n", ar[k1], ar[k2], ar[k3], ar[k4], ar[k5], ar[k6]);
                                }
                            }
                        }
                    }
                }
            }
        }



    }

    return 0;
}
