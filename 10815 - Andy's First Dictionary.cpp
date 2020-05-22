#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string str, word;
    int i, l;

    set <string> s;
    set <string>::iterator it;

    while(getline(cin, str))
    {
        l = str.size();
        word = "";

        for(i = 0; i < l; i++)
        {
            if(isalpha(str[i]))
            {
                word += tolower(str[i]);
            }
            else if(word != "")
            {
                s.insert(word);
                word = "";
            }
        }

        if(word != "")
        {
            s.insert(word);
        }
    }
    for(it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
