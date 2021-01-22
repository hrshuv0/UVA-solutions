#include <bits/stdc++.h>

using namespace std;

#define mx 4792

vector<bool> isPrime(46340, true);
vector<int> primes(4792);

void seave();


int main()
{
    //freopen("input.txt", "r", stdin);

    seave();

    int n;
    bool negative;

    while(cin >> n, n)
    {
        cout << n << " = ";
        negative = false;

        if(n < 0)
        {
            cout << -1;
            n = -n;
            negative = true;
        }

        for(int i = 0; i < mx && primes[i] * primes[i] <= n; i++)
        {

            while(n % primes[i] == 0)
            {
                if(negative)
                {
                    cout << " x " << primes[i];
                }
                else
                {
                    cout << primes[i];
                    negative = true;
                }
                n = n / primes[i];
            }
        }
        if(n > 1)
        {
            if(negative)
            {
                cout << " x " << n;
            }
            else{
                cout << n;
            }

        }
        cout << endl;
    }





    return 0;
}

void seave()
{
    int p(1);
    primes[0] = 2;

    for(long long i = 3; i < 46340; i+=2)
    {
        if(isPrime[i])
        {
            for(long long j = i*i; j < 46340; j += i)
            {
                isPrime[j] = false;
            }
            primes[p] = i;
            p++;
        }
    }
}
