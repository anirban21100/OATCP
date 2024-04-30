#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> validArrangement(vector<vector<int>> &pairs)
{
    unordered_map<int, unordered_set<int>> g;
    unordered_map<int, pair<int, int>> deg;
    for (auto p : pairs)
    {
        g[p[0]].insert(p[1]);
        deg[p[1]].first++;  // indeg
        deg[p[0]].second++; // outdeg
    }
    auto getsrc = [&]()
    {
        int src;
        for (auto [e, d] : deg)
        {
            auto [in, out] = d;
            if (out - in == 1)
            {
                src = e;
                break;
            }
            src = e;
        }
        return src;
    };
    int src = getsrc();
    deque<int> path;
    stack<int> st;
    st.push(src);
    while (!st.empty())
    {
        int u = st.top();
        if (g[u].size() == 0)
        {
            path.push_front(u);
            st.pop();
        }
        else
        {
            int v = *g[u].begin();
            g[u].erase(v);
            st.push(v);
        }
    }
    vector<vector<int>> ans;
    int n = path.size();
    for (int i = 0; i < n - 1; ++i)
    {
        ans.push_back({path[i], path[i + 1]});
    }
    return ans;
}

int main()
{

    int n;
    cin >> n;
    vector<vector<int>> vp(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        vp[i].push_back(x);
        vp[i].push_back(y);
    }
    vector<vector<int>> ans = validArrangement(vp);
    cout << "\n";
    if (ans.size() != n)
    {
        cout << "No valid arrangement found !" << "\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << ans[i][0] << " " << ans[i][1] << "\n";
        }
    }
}