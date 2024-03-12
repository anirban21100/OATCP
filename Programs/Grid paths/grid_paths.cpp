#include <bits/stdc++.h>
using namespace std;

int INF = int(1e9 + 7);
int n;

int gridpath(int i, int j, int r, int c,
             vector<vector<int>> &A,
             vector<vector<int>> &paths)
{
    if (i == r || j == c)
    {
        return 0;
    }

    if (A[i][j] == 1)
    {
        return 0;
    }

    if (i == r - 1 && j == c - 1)
    {
        return 1;
    }

    if (paths[i][j] != -1)
    {
        return paths[i][j];
    }

    return paths[i][j] = gridpath(i + 1, j, r, c, A, paths) + gridpath(i, j + 1, r, c, A, paths);
}

int numpath(vector<vector<int>> &A)
{

    int r = A.size(), c = A[0].size();

    vector<vector<int>> paths(r, vector<int>(c, -1));

    return gridpath(0, 0, r, c, A, paths);
}

int main()
{
    cin >> n;
    vector<vector<int>> A(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < A[i].size(); j++)
        {
            char x;
            cin >> x;
            if (x == '*')
            {
                A[i][j] = 1; // obstacle
            }
            else
            {
                A[i][j] = 0;
            }
        }
    }

    cout << numpath(A) % INF << " \n";
}
