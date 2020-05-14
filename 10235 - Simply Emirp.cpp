#include <bits/stdc++.h>

using namespace std;
#define mx 1000000

bool prime[mx];

void seave();
int numrev(int n);

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    seave();

    int n, x;

    while(cin >> n)
    {
        x = numrev(n);

        if(prime[n] && prime[x] && n != x)
        {
            cout << n << " is emirp.";
        }
        else if(prime[n]){
            cout << n << " is prime.";
        }
        else{
            cout << n << " is not prime.";
        }
        cout << endl;
    }
    return 0;
}

int numrev(int n)
{
    int x = 0;

    while(n)
    {
        x = (n % 10) + (10 * x);
        n = n / 10;
    }

    return x;
}
void seave()
{
    memset(prime, true, sizeof(prime));

    for(int i = 2; i*i <= mx; i++)
    {
        if(prime[i])
        {
            for(int j = i*i; j <= mx; j += i)
            {
                prime[j] = false;
            }
        }
    }
}
