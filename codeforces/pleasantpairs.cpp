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
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        int ans = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (arr[i] * arr[j] == i + j) {
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
