#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main() {
ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
int t; cin >> t;
while(t--){
    ll n, x;
        cin >> n >> x;

        ll count = 0;
        for (ll a = 1; a <x; ++a) {
            for (ll b = 1; b < x - a; ++b) {
                for (ll c = 1; c < x - a - b; ++c) {
                    if (a * b + a * c + b * c <= n) {
                        count++;
                    } else {
                        break;
                    }
                }
            }
        }

        cout << count << endl;
}
return 0;
}
