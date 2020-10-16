#include <bits/stdc++.h>

using namespace std;

int main()
{
    float t, c, f;

    cin >> t;
    for(int i = 1; i < t+1; i++)
    {
        cin >> c >> f;

        c += (f-32)*(5.0/9.0)+17.778;

        cout << "Case " << i << ": " << fixed << setprecision(2) << c << endl;
    }

    return 0;
}
