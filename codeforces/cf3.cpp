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
        int n, q;
        cin >> n >> q;
        vector<vector<int>> queries(q, vector<int>(2));
        string a(n, ' ');
        string b(n, ' ');

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < q; i++)
        {
            cin >> queries[i][0] >> queries[i][1];
        }
        vector<vector<int>> temp1(n + 1, vector<int>(26, 0));
        vector<vector<int>> temp2(n + 1, vector<int>(26, 0));

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                temp1[i][j] = temp1[i - 1][j];
                temp2[i][j] = temp2[i - 1][j];
            }
            temp1[i][a[i - 1] - 'a']++;
            temp2[i][b[i - 1] - 'a']++;
        }

        for (int i = 0; i < q; i++)
        {
            int l, r;
            l = queries[i][0];
            r = queries[i][1];
            int ans = 0;
            vector<int> a1(26, 0), b2(26, 0);
            for (int j = 0; j < 26; j++)
            {
                a1[j] = temp1[r][j] - temp1[l - 1][j];
                b2[j] = temp2[r][j] - temp2[l - 1][j];
                ans += abs(a1[j]-b2[j]);
            }
            cout << ans / 2 << endl;
        }
    }
    return 0;
}
