#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string str, s;
    int l, p;

    while(getline(cin, str))
    {

        l = str.size();

        for(int i = 0; i < l; i++)
        {
            if(isalpha(str[i]))
            {
                str[i] = tolower(str[i]);
            }

            if(str[i] == 'b')
            {
                str[i] = 'c';
                continue;
            }
            if(str[i] == 'c')
            {
                str[i] = 'z';
                continue;
            }
            if(str[i] == 'd')
            {
                str[i] = 'a';
                continue;
            }
            if(str[i] == 'e')
            {
                str[i] = 'q';
                continue;
            }
            if(str[i] == 'f')
            {
                str[i] = 's';
                continue;
            }
            if(str[i] == 'g')
            {
                str[i] = 'd';
                continue;
            }
            if(str[i] == 'h')
            {
                str[i] = 'f';
                continue;
            }
            if(str[i] == 'i')
            {
                str[i] = 'y';
                continue;
            }
            if(str[i] == 'j')
            {
                str[i] = 'g';
                continue;
            }
            if(str[i] == 'k')
            {
                str[i] = 'h';
                continue;
            }
            if(str[i] == 'l')
            {
                str[i] = 'j';
                continue;
            }
            if(str[i] == 'm')
            {
                str[i] = 'b';
                continue;
            }
            if(str[i] == 'n')
            {
                str[i] = 'v';
                continue;
            }
            if(str[i] == 'o')
            {
                str[i] = 'u';
                continue;
            }
            if(str[i] == 'p')
            {
                str[i] = 'i';
                continue;
            }
            if(str[i] == 'r')
            {
                str[i] ='w';
                continue;
            }
            if(str[i] == 't')
            {
                str[i] = 'e';
                continue;
            }
            if(str[i] == 'u')
            {
                str[i] = 't';
                continue;
            }
            if(str[i] == 'v')
            {
                str[i] = 'x';
                continue;
            }
            if(str[i] == 'y')
            {
                str[i] = 'r';
                continue;
            }
            if(str[i] == '\[')
            {
                str[i] = 'o';
                continue;
            }
            if(str[i] == '\]')
            {
                str[i] = 'p';
                continue;
            }
            if(str[i] == ';')
            {
                str[i] = 'k';
                continue;
            }
            if(str[i] == '\'')
            {
                str[i] = 'l';
                continue;
            }
            if(str[i] == ',')
            {
                str[i] = 'n';
                continue;
            }
            if(str[i] == '.')
            {
                str[i] = 'm';
                continue;
            }

        }
        cout << str << endl;
    }




    return 0;
}
