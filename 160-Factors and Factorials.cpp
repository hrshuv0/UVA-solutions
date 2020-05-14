#include <bits/stdc++.h>

using namespace std;

#define mx 111111

int fact[mx];
void count_numb(int i, int n);
void factorial(int n);


int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, n, x;

    while(cin >> n, n)
    {
        memset(fact, 0, sizeof(fact));

        factorial(n);

        if(fact[2])
        {
            cout << setw(3) << n << "! =" << setw(3) << fact[2];
        }
        int x = 1;
        for(int i = 3; i <= n; i++)
        {
            if(fact[i])
            {
                if((x++)%15 == 0)
                {
                    cout << "\n      ";
                }
                cout << setw(3) << fact[i];
            }
        }
        cout << endl;

    }

}

void factorial(int n)
{
    if(n == 1)
        return;

    count_numb(2, n);
    factorial(n-1);
}

void count_numb(int i, int n)
{
    if(i > n)
        return;

    if(n % i == 0)
    {
        fact[i]++;
        count_numb(i, n/i);
    }
    else
    {
        count_numb(i+1, n);
    }
}

