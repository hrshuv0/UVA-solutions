#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;

    map<char, int> p, q;
    map<char, int>::iterator itr1, itr2;

    while(getline(cin, a) && getline(cin, b))
    {
        int la = a.size();
        int lb = b.size();

        for(int i = 0; i < la; i++)
        {
            if(isalpha(a[i]))
            {
                p[a[i]]++;
            }
        }

        for(int i = 0; i < lb; i++)
        {
            if(isalpha(b[i]))
            {
                q[b[i]]++;
            }
        }

        for(itr1 = p.begin(); itr1 != p.end(); itr1++)
        {
            for(itr2 = q.begin(); itr2 != q.end(); itr2++)
            {
                if(itr1->first == itr2->first)
                {
                    int x = min(itr1->second, itr2->second);

                    while(x--)
                    {
                        cout << itr1->first;
                    }
                }
            }
        }
        cout << endl;

        p.clear();
        q.clear();

    }

    return 0;
}
