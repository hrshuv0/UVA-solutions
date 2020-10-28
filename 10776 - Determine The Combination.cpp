#include <bits/stdc++.h>

using namespace std;

#define mx 1111

int n, k;

string s;
vector<char> v;
bool checked[mx];

void combination(int idx);


int main()
{
    while(cin >> s >> k)
    {
        memset(checked, false, sizeof(checked));

        n = s.size();
        sort(s.begin(), s.end());
        combination(0);
    }

    return 0;
}


void combination(int idx)
{
    if(v.size() == k)
    {
        for(char c: v)
        {
            cout << c;
        }
        cout << endl;
        return;
    }

    for(int i = idx; i < n; i++)
    {
        if(!checked[i])
        {
            checked[i] = true;
            v.push_back(s[i]);
            combination(i+1);
            checked[i] = false;
            v.pop_back();
        }
        while(s[i] == s[i+1])i++;
    }
}
