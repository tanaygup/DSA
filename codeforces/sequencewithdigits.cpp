#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

ll helper(ll x) {
    ll mini = 10, maxi = 0;
    while(x > 0) {
        ll y = x % 10;
        x /= 10;
        mini = min(mini, y);
        maxi = max(maxi, y);
    }
    return mini * maxi;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll a1;
        int k;
        cin >> a1 >> k;

        while (k > 1) {
            ll a = helper(a1);
            if (a == 0) break;
            a1 += a;
            k--;
        }
        cout << a1 << endl;
    }
    return 0;
}
