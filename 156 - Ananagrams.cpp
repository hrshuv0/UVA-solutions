#include <bits/stdc++.h>

using namespace std;

string customized(string str);
void uva156();

int main()
{
    //freopen("input.txt", "r", stdin);

    uva156();

    return 0;
}

void uva156()
{
    string str;
    vector <string> all;
    map<string, int> m;

    while(cin >> str && str.compare("#") != 0)
    {
        all.push_back(str);
        str = customized(str);
        m[str]++;
    }

    sort(all.begin(), all.end());

    int i, l = all.size();

    for(i = 0; i < l; i++)
    {
        if(m[customized(all[i])] == 1)
        {
            cout << all[i] << endl;
        }
    }
}

string customized(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());

    return str;
}
