#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define mx 1111

int dp[mx][mx];

int knapsack(int weight[], int price[], int capacity, int n);


int main()
{
    //freopen("input.txt", "r", stdin);

    int t, n, i, person, p, final_profit;
    int weight[mx], price[mx], profit[mx];

    scanf("%d", &t);
    while(t--)
    {
        //memset(dp, -1, sizeof(dp) * mx * mx);

        for(int ii = 0; ii < mx; ii++)
        {
            for(int jj = 0; jj < mx; jj++)
            {
                dp[ii][jj] = -1;
            }
        }

        final_profit = 0;

        scanf("%d", &n);
        for(i = 0; i < n; i++)
        {
            scanf("%d %d", &price[i], &weight[i]);
        }

        scanf("%d", &person);
        for(i = 0; i < person; i++)
        {
            scanf("%d", &p);

            profit[i] = knapsack(weight, price, p, n);
            final_profit += profit[i];
        }

        cout << final_profit << endl;
    }
    return 0;
}
int knapsack(int weight[], int price[], int capacity, int n)
{
    int pr1, pr2;
    if(dp[capacity][n] != -1) return dp[capacity][n];

    if(capacity == 0 || n == 0)
    {
        return 0;
    }

    if(weight[n-1] > capacity)
    {
        return knapsack(weight, price, capacity, n-1);
    }
    else
    {
        pr1 = price[n-1] + knapsack(weight, price, capacity - weight[n-1], n - 1);
        pr2 = knapsack(weight, price, capacity, n-1);

        dp[capacity][n] = max(pr1, pr2);
        return dp[capacity][n];
    }
}

