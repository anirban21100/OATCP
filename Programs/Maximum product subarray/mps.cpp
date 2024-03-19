#include <bits/stdc++.h>
using namespace std;

int INF = int(1e9 + 7);
int maxProduct(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    int maxi = INT_MIN, neg = 0, prefProd = 1;

    for (int i = 0; i < n; i++)
    {
        prefProd *= nums[i];
        maxi = max(maxi, prefProd);

        if (prefProd == 0)
        {
            prefProd = 1;
            neg = 0;
        }
        else if (prefProd < 0)
        {
            if (neg == 0)
                neg = prefProd;
            else
                maxi = max(maxi, prefProd / neg);
        }
    }

    return maxi;
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
    int res = maxProduct(nums);
    cout << res % INF << endl;
}