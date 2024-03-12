#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MAXN 1000001
#define MOD int(1e9 + 7)

int DP[MAXN], n, t;
vector<int> sol(t);

int compute(int left)
{
    if (DP[left] != 0)
    {
        return DP[left];
    }
    for (int i = 1; i <= 6; i++)
    {
        if (left - i >= 0)
        {
            DP[left] += compute(left - i);
            DP[left] %= MOD;
        }
    }
    return DP[left];
}

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        memset(DP, 0, sizeof(DP));
        DP[0] = 1;
        sol.push_back(compute(n) % MOD);
    }
    for (int i = 0; i < sol.size(); i++)
    {
        cout << sol[i] << endl;
    }
}