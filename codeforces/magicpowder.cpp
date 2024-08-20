#include <bits/stdc++.h>
using namespace std;

bool canBakeCookies(int cookies, int n, int k, const vector<int>& req, const vector<int>& avail) {
    long long totalPowderNeeded = 0;
    for (int i = 0; i < n; ++i) {
        long long totalNeeded = 1LL * req[i] * cookies;
        if (totalNeeded > avail[i]) {
            totalPowderNeeded += totalNeeded - avail[i];
            if (totalPowderNeeded > k) {
                return false;
            }
        }
    }
    return totalPowderNeeded <= k;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> req(n), avail(n);
    for (int i = 0; i < n; ++i) {
        cin >> req[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> avail[i];
    }

    int left = 0, right = 1e9, maxCookies = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (canBakeCookies(mid, n, k, req, avail)) {
            maxCookies = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << maxCookies << endl;
    return 0;
}
