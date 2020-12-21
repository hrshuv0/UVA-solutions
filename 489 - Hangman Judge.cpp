#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    string correct, guess;
    int round, mistake;

    while(cin >> round, round != -1)
    {
        mistake = 0;
        cin >> correct >> guess;

        for(int i = 0; i < guess.size() && correct != ""; i++)
        {
            if(correct.find(guess[i]) != string::npos)
            {
                correct.erase(remove(correct.begin(), correct.end(), guess[i]), correct.end());
            }
            else{
                mistake++;
            }
        }

        cout << "Round " << round << endl;

        if(mistake > 6)
        {
            cout << "You lose.";
        }
        else if(correct == "")
        {
            cout << "You win.";
        }
        else{
            cout << "You chickened out.";
        }
        cout << endl;

    }

    return 0;
}
