#include <bits/stdc++.h>

using namespace std;

#define mx 12345

void factorial(int n);

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;

    while(cin >> n)
    {
        cout << n << "!" << endl;
        factorial(n);
        cout << endl;
    }

    return 0;
}

int multiply(int n, int res[], int l)
{
    int carry = 0;

    for(int i = 0; i < l; i++)
    {
        int x = res[i] * n + carry;

        res[i] = x % 10;
        carry = x / 10;
    }

    while(carry)
    {
        res[l] = carry % 10;
        carry = carry / 10;
        l++;
    }
    return l;
}
void factorial(int n)
{
    int ar[mx];

    ar[0] = 1;
    int l = 1;

    for(int i = 2; i <= n; i++)
    {
        l = multiply(i, ar, l);
    }

    for(int i = l-1; i>=0; i--)
    {
        cout << ar[i];
    }
}

