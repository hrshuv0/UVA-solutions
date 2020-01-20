#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
   int t, a, b;

   cin >> t;
   while(t--)
   {
      cin >> a >> b;
      if(a == b)
      {
         cout << a << " " << b << endl;
      }
      else if(a == gcd(a,b) && b == lcm(a,b))
      {
         cout << a << " " << b << endl;
      }
      else{
         cout << -1 << endl;
      }
   }
   return 0;
}
int gcd(int a, int b)
{
   return __gcd(a, b);
}
int lcm(int a, int b)
{
   return (a *b)/ __gcd(a, b);
}
