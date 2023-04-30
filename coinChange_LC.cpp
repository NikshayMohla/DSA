#include <bits/stdc++.h>
using namespace std;
int coinChange(vector<int> &coins, int amount)
{
    vector<int> dp(amount + 1, 10001);
    dp[0] = 0;
    int n = coins.size();

    for (int i = 0; i <= amount; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (coins[j] <= i)
            {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }
    return dp[amount] == 10001 ? -1 : dp[amount];
}
int main()
{
    vector<int> coins;
    int amount;
    int n;
    cin >> n;
    cin >> amount;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        coins.push_back(t);
    }
    cout << coinChange(coins, amount);
}