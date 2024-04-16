#include <bits/stdc++.h>
using namespace std;

int hammingDistance(int x, int y)
{
    int count = 0;
    for (int i = 31; i >= 0; i--)
    {
        int first = (x & (1 << i));
        int second = (y & (1 << i));
        if (first != second)
            count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int m = n;
    vector<int> nums;
    while (m--)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            res += hammingDistance(nums[i], nums[j]);
        }
    }
    cout << res << "\n";
}