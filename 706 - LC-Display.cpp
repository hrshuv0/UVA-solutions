#include <bits/stdc++.h>

using namespace std;

int n;
bool strt = false;
bool spc = false;

void mid();
void left();
void right();
void both();
void nomid();

void solution(string num);

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string s;
    while(cin >> n, n)
    {

        cin >> s;

        if(spc)
        {
            cout << endl;
        }
        else{
            spc = true;
        }
        solution(s);
        cout << endl;
    }
    cout << endl;

    return 0;
}

void solution(string num)
{
    int x;
    string mem = num;



    //top
    for(char c : num)
    {
        if(strt)
        {
            cout << " ";
        }
        else
        {
            strt = true;
        }


        x = c - '0';

        if(x == 2 || x == 3 || x == 5 || x == 6 || x == 7 || x == 8 || x == 9 || x == 0)
        {
            mid();
        }
        else if(x == 1 || x == 4)
        {
            nomid();
        }
    }
    strt = false;

    cout << endl;
    //midTop
    for(int i = 0; i < n; i++)
    {
        for(char c : num)
        {
            if(strt)
            {
                cout << " ";
            }
            else
            {
                strt = true;
            }


            x = c - '0';

            if(x == 1 || x == 2 || x == 3 || x == 7)
            {
                right();
            }
            else if(x == 5 || x == 6)
            {
                left();
            }
            else
            {
                both();
            }
        }
        strt = false;
        cout << endl;
    }

    //mid
    for(char c : num)
    {
        if(strt)
        {
            cout << " ";
        }
        else
        {
            strt = true;
        }


        x = c - '0';

        if(x == 2 || x == 3 || x == 4 || x == 5 || x == 6 || x == 8 || x == 9)
        {
            mid();
        }
        else
        {
            nomid();
        }
    }
    strt = false;

    cout << endl;
    //midBottom
    for(int i = 0; i < n; i++)
    {
        for(char c : num)
        {
            if(strt)
            {
                cout << " ";
            }
            else
            {
                strt = true;
            }



            x = c - '0';

            if(x == 2)
            {
                left();
            }
            else if(x == 1 || x == 3 || x == 4 || x == 5 || x == 7 || x == 9)
            {
                right();
            }
            else
            {
                both();
            }
        }
        strt = false;
        cout << endl;
    }

    //bottom
    for(char c : num)
    {
        if(strt)
        {
            cout << " ";
        }
        else{
            strt = true;
        }


        x = c - '0';

        if(x == 2 || x == 3 || x == 5 || x == 6 || x == 8 || x == 9 || x == 0)
        {
            mid();
        }
        else
        {
            nomid();
        }
    }
    strt = false;

}




void mid()
{
    cout << " ";
    for(int i = 0; i < n; i++)
    {
        cout << "-";
    }
    cout << " ";
}
void left()
{
    cout << "|";
    for(int i = 0; i < n; i++)
    {
        cout << " ";
    }
    cout << " ";


}
void right()
{
    cout << " ";
    for(int i = 0; i < n; i++)
    {
        cout << " ";
    }
    cout << "|";
}

void both()
{
    cout << "|";
    for(int i = 0; i < n; i++)
    {
        cout << " ";
    }
    cout << "|";
}
void nomid()
{
    cout << " ";
    for(int i = 0; i <= n; i++)
    {
        cout << " ";
    }
}



