#include <bits/stdc++.h>
using namespace std;

int INF = int(1e9 + 7);
int n;

int minPatches(vector<int> &nums, int n)
{
    int n2 = nums.size();
    long long maxreach = 0;
    int ans = 0;
    for (int i = 0; i < n2; i++)
    {
        while (nums[i] > (maxreach + 1))
        {
            maxreach = 2 * maxreach + 1;
            ans++;
            if (maxreach >= n)
            {
                return ans;
            }
        }
        maxreach += nums[i];
        if (maxreach >= n)
        {
            return ans;
        }
    }
    while (maxreach < n)
    {
        maxreach = 2 * maxreach + 1;
        ans++;
    }
    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    vector<int> nums;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }
        else
        {
            int x = int(s[i] - '0');
            nums.push_back(x);
        }
    }
    cin >> n;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     cout << nums[i] << " ";
    // }
    // cout << endl;
    int res = minPatches(nums, n);
    cout << res << endl;
}
