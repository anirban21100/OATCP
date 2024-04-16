#include <bits/stdc++.h>
using namespace std;

int count_subgrids(int **color, int n)
{
    int subgrids = 0;
    for (int a = 0; a < n; ++a)
        for (int b = a + 1; b < n; ++b)
        {
            int count = 0;
            for (int i = 0; i < n; ++i)
            {
                if (color[a][i] == 1 && color[b][i] == 1)
                    ++count;
            }
            subgrids += ((count - 1) * count) / 2;
        }
    return subgrids;
}

int main()
{
    int n;
    cin >> n;
    int **arr;
    arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int res = count_subgrids(arr, n);
    cout << res << "\n";
}
