#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, clk, i = 0;
    string str;

    cin >> t;
    cin.ignore();

    while(t--)
    {
        i++;
        clk = 0;
        getline(cin, str);

        for(char c: str)
        {
            if(isspace(c) || c == 'a' || c == 'd' || c == 'g' || c == 'j' || c == 'm' || c == 'p' || c == 't' || c == 'w')
            {
                clk += 1;
            }
            else if(c == 'b' || c == 'e' || c == 'h' || c == 'k' || c == 'n' || c == 'q' || c == 'u' || c == 'x')
            {
                clk += 2;
            }
            else if(c == 'c' || c == 'f' || c == 'i' || c == 'l' || c == 'o' || c == 'r' || c == 'v' || c == 'y')
            {
                clk += 3;
            }
            else if(c == 's' || c == 'z')
            {
                clk += 4;
            }
        }
        cout << "Case #" << i << ": " << clk << endl;
    }

    return 0;
}
