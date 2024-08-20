#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int idx = -1;
        vector<pair<int, int>> ans;
        for (int i = 2; i <= n; i++)
        {
            if (a[i] != a[1])
            {
                idx = i;
                ans.push_back({1, i});
            }
        }
        if (idx == -1)
        {
            cout << "NO" << endl;
            continue;
        }

        for (int i = 2; i <= n; i++)
        {
            if (a[i] == a[1])
            {
                ans.push_back({idx, i});
            }
        }
        cout << "YES" << endl;
		for (auto it : ans) cout << it.first << " " << it.second << endl;
    }
    return 0;
}
