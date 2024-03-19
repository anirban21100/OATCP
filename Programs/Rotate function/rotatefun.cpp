#include <bits/stdc++.h>
using namespace std;

int INF = int(1e9 + 7);

int maxRotateFunction(vector<int> &A)
{
    if (A.size() == 0)
        return 0;
    int sum = 0, F0 = 0, res = INT_MIN;
    for (int i = 0; i < A.size(); i++)
    {
        sum += A[i];
        F0 += i * A[i];
    }
    int dp[A.size()];
    dp[0] = F0;
    res = dp[0];
    for (int i = 1; i < A.size(); i++)
    {
        dp[i] = dp[i - 1] + sum - A.size() * A[A.size() - i];
        res = max(res, dp[i]);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    while (n--)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int res = maxRotateFunction(nums);
    cout << res % INF << endl;
}