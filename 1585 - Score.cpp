#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int n, cnt, total;
    string s;

    cin >> n;
    cin.ignore();
    while(n--)
    {
        cin >> s;
        cnt = 0;
        total = 0;
        bool f = false;
        for(char c: s)
        {
            if(c == 'O')
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
            total += cnt;
        }
        cout << total << endl;
    }

    return 0;
}
