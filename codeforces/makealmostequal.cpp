#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
#include <set>

using namespace std;
typedef long long ll;

ll solve(vector<ll> &v)
{
    ll n = v.size();
    set<ll> diff;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            diff.insert(abs(v[j] - v[i]));
        }

        for (auto i : diff)
        {
            set<ll> res;
            for (auto j : v)
            {
                res.insert(j % i);
            }
            if (res.size() == 2)
                return i;
        }
    }
    return -1;
}
int main()
{
    ll testcases;
    cin >> testcases;

    while (testcases--)
    {
        ll n;
        cin >> n;
        ll ans = 0;

        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ans = solve(v);

        cout << ans << endl;
    }

    return 0;
}
