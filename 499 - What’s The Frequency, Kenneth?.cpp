#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    map <char, int> m;
    map <char, int>::iterator itr;
    string str;
    int i, l, mx;

    while(getline(cin, str))
    {
        m.clear();

        l = str.size();
        mx = 0;

        for(i = 0; i < l; i++)
        {
            if(isalpha(str[i]))
            {
                m[str[i]]++;
            }
        }

        for(itr = m.begin(); itr != m.end(); itr++)
        {
            if(mx < itr->second)
            {
                mx = itr->second;
            }
        }
        for(itr = m.begin(); itr != m.end(); itr++)
        {
            if(mx == itr->second)
            cout << itr->first;
        }
        cout << " " << mx << endl;
    }

    return 0;
}
