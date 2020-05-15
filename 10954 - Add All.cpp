#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t, n, x, cost, t_cost;
    priority_queue <int, vector<int>, greater<int> > q;

    while(cin >> t, t)
    {
        t_cost = 0;

        while(t--)
        {
            cin >> x;
            q.push(x);
        }

        while(q.size() != 1)
        {
            cost = q.top();
            q.pop();
            cost = cost + q.top();
            q.pop();
            q.push(cost);
            t_cost = t_cost + cost;

        }
        cout << t_cost << endl;
        q.pop();
    }
    return 0;
}
