#include <bits/stdc++.h>

using namespace std;

#define INF INT_MAX
#define mx  1111

bool iscut[mx];
int mem[mx][mx];

int cut(int s, int e);

int main()
{
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);

   int n, c;

   while(cin >> n, n)
   {
      memset(iscut, false, sizeof(iscut));
      memset(mem, -1, sizeof(mem));

      cin >> c;
      int x;
      while(c--)
      {
         cin >> x;
         iscut[x] = true;
      }
      cout << "The minimum cutting is " << cut(0, n) << "." << endl;
   }
   return 0;
}

int cut(int s, int e)
{
  if(mem[s][e] != -1)
  {
     return mem[s][e];
  }

  int mn, mincost = INF;

  for(int i = s + 1; i < e; i++)
  {
     if(iscut[i])
     {
        mn = (e-s) + cut(s, i) + cut(i, e);

        mincost = min(mincost, mn);
     }
  }
  if(mincost == INF)
  {
     mincost = 0;
  }
  mem[s][e] = mincost;
  return mincost;
}
