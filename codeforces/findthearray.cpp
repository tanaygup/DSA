#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

ll closest(ll x) {
    if (x <= 1) return 1; // handle x = 1 or lower cases
    if (x == 2) return 2; // early return for x = 2

    ll cnt = 0;
    while (x > 1) {
        x /= 2;
        cnt++;
    }
    return 1LL << cnt; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<ll> b(n);
        for (int i = 0; i < n; i++) {
            b[i] = closest(a[i]);
        }
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << "\n"; 
    }
    return 0;
}
