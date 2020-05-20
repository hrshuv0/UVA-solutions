#include <bits/stdc++.h>

using namespace std;

bool dead[111];
bool crisis(int n, int x);

int main()
{
    int n, i;

    while(cin >> n, n)
    {
        i = 1;
        while(!crisis(n, i))
        {
            i++;
        }
        cout << i << endl;
    }

    return 0;
}

bool crisis(int n, int k)
{
    queue <int> q;
    int x, p;

    for(int i = 1; i <= n; i++)
    {
        q.push(i);
    }

    x = q.front();
    q.pop();

    dead[x] = true;

    for(int i = 1; i < n-1; i++)
    {
        p = k;
        for(int j = 1; j < p; j++)
        {
            x = q.front();
            q.pop();
            q.push(x);

        }
        x = q.front();
        q.pop();
    }

    if(q.front() == 13)
    {
        q.pop();
        return true;
    }

    return false;
}
