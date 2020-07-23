#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s, str;

	while(getline(cin, s), s.compare("DONE") != 0)
	{
		str = "";

		int i, l = s.size();

		for(i = 0; i < l; i++)
        {
            if(isalpha(s[i]))
            {
                str += tolower(s[i]);
            }
        }

        s = str;
        reverse(s.begin(), s.end());

        if(str.compare(s) == 0)
        {
            cout << "You won't be eaten!";
        }
        else{
            cout << "Uh oh..";
        }
        cout << endl;

	}

	return 0;
}

