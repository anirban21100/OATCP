class Solution
{
public:
    int solve(vector<int> &coins, int amount, vector<int> &dp)
    {
        if (amount == 0)
            return 0;

        if (dp[amount] != -1)
            return dp[amount];

        int mincoins = INT_MAX;
        for (int i = 0; i < coins.size(); i++)
        {
            if (amount >= coins[i])
            {
                int rec = solve(coins, amount - coins[i], dp);
                if (rec != INT_MAX)
                {
                    int res = 1 + rec;
                    mincoins = min(res, mincoins);
                }
            }
        }
        dp[amount] = mincoins;
        return mincoins;
    }
    int coinChange(vector<int> &coins, int amount)
    {
        sort(coins.begin(), coins.end(), greater<int>());
        vector<int> dp(amount + 1, -1);
        dp[0] = 0; // 0 coins -> 0 amount
        int ans = solve(coins, amount, dp);
        return ans == INT_MAX ? -1 : ans;
    }
};