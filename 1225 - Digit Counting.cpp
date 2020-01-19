#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, arr[11], x, n;
    map <int, int> digit;
    map <int, int>::iterator itr;

    cin >> t;
    while(t--)
    {
       digit.clear();
       memset(arr, 0, sizeof(arr));
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
           x = i;
            while(x)
            {
               digit[x % 10]++;
               x /= 10;
            }
        }
        int i;
        for(itr = digit.begin(), i = 0;  itr != digit.end(); itr++, i++)
        {
            arr[itr->first] = itr->second;
        }
        cout << arr[0];
        for(i = 1; i < 10; i++)
        {
           cout << " "<< arr[i];
        }
        cout << endl;
    }

    return 0;
}
