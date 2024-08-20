#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isValid(vector<int>& p, int n, int k, ll mid) {
    ll sum = p[0] + mid;
    for (int i = 1; i < n; ++i) {
        if (p[i] * 100LL > k * sum) {
            return false;
        }
        sum += p[i];
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }
        
        ll low = 0, high = 1e14, ans = high;
        
        while (low <= high) {
            ll mid = low + (high - low) / 2;
            if (isValid(p, n, k, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
