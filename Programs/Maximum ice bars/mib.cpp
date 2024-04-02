#include <bits/stdc++.h>
using namespace std;

int INF = int(1e9 + 7);
int n;
int maxIceCream(vector<int> &costs, int coins)
{
    sort(costs.begin(), costs.end());
    for (int i = 0; i < costs.size(); ++i)
        if ((coins -= costs[i]) < 0)
            return i;
    return costs.size();
}
int main()
{
    cin >> n;
    vector<int> costs;
    while (n--)
    {
        int x;
        cin >> x;
        costs.push_back(x);
    }
    int res = maxIceCream(costs, n);
    cout << res << endl;
}