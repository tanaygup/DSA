#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;

int powm(int x, int n)
{
    x %= M;
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    int p = powm(1LL * x * x % M, n / 2); // Use 1LL to handle large values
    if (n % 2)
        return 1LL * p * x % M;
    else
        return p;
}

int mod_div(int p, int q) { return 1LL * p % M * powm(q, M - 2) % M; }

vector<int> fact(1e6 + 1, 1); // Initialize with size 1e6 + 1 to cover all indices
int ncr(int n, int r)
{
    if (r > n)
        return 0;
    return mod_div(fact[n], 1LL * fact[n - r] * fact[r] % M); // Ensure correct modulo multiplication
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;

    // Precompute factorials up to 1e6
    for (int i = 1; i < fact.size(); i++) {
        fact[i] = 1LL * fact[i - 1] * i % M;
    }

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int cnt = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 1)
                cnt++;
        }
        int cnt0 = n - cnt;
        int req = (k / 2) + 1;
        int ans = 0;

        if (cnt < req) {
            cout << 0 << endl;
            continue;
        }

        for (int i = req; i <= min(k, cnt); i++) { // Correct range of i
            ans = (ans + 1LL * ncr(cnt, i) * ncr(cnt0, k - i) % M) % M;
        }

        cout << ans << endl;
    }
    return 0;
}
