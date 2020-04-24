#include <bits/stdc++.h>

using namespace std;

vector <string> fibo;

string fillstr(string str, int l);
string addstr(string a, string b);

void fibonacchi();

int main()
{
    fibonacchi();

    int n;

    while(cin >> n)
    {
        cout << "The Fibonacci number for " << n << " is " << fibo[n] <<endl;
    }

    return 0;
}
void fibonacchi()
{
    fibo.push_back("0");
    fibo.push_back("1");

    for(int i = 2; i <= 5000; i++)
    {
        fibo.push_back(addstr(fibo[i-1], fibo[i-2]));
    }
}

string addstr(string a, string b)
{
    string ans = "";
    int lena, lenb, i;

    lena = a.size();
    lenb = b.size();
    int c = 0, x, y, l;
    l = min(lena, lenb);

    if(lena < lenb)
    {
        a = fillstr(a, lenb-lena);
    }
    else
    {
        b = fillstr(b, lena-lenb);
    }
    //cout << endl << a << endl << b << endl;

    l = a.size();

    for(i = l-1; i >= 0; i--)
    {
        //cout << (a[i] - '0') << " + " << (b[i]) << " + " << c << " = ";
        x = (a[i] - '0') + (b[i] - '0') + c;

        //cout << x << endl;
        c = x / 10;
        x = x % 10;

        ans += x + '0';
    }

    if(c)
    {
        ans += c + '0';
    }
    reverse(ans.begin(), ans.end());

    return ans;
}

string fillstr(string str, int l)
{
    string x = "";
    for(int i = 0; i < l; i++)
    {
        x += "0";
    }
    return x+str;
}



