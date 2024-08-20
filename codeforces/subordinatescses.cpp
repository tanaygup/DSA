#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
void dfs(int u, vector<vector<int>> &adjls, vector<int>& subordinates)
{
    
    for (int v : adjls[u])
    {
        dfs(v, adjls, subordinates);
        subordinates[u] += 1 + subordinates[v];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> boss(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> boss[i];
    }
    vector<vector<int>> adjls(n);
    for (int i = 0; i < n - 1; i++)
    {
        adjls[boss[i] - 1].push_back(i + 1);
    }

    vector<int> subordinates(n, 0);
    dfs(0, adjls, subordinates);

    for (int i = 0; i < n; i++)
    {
        cout << subordinates[i] << " ";
    }
    cout << endl;

    return 0;
}
