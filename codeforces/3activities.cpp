#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{

    int testcases;
    cin >> testcases;
    
    
    while (testcases--)
    {
        ll n;
        cin >> n;
        ll ans = 0;
        vector<ll> ski(n);
        vector<pair<ll, ll>> v1, v2, v3;
        for (ll i = 0; i < n; i++)
        {
            cin >> ski[i];
            v1.push_back(make_pair(ski[i], i));
        }
        vector<ll> movie(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> movie[i];
            v2.push_back(make_pair(movie[i], i));
        }
        vector<ll> board(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> board[i];
            v3.push_back(make_pair(board[i], i));
        }

        sort(v1.rbegin(), v1.rend());
        sort(v2.rbegin(), v2.rend());
        sort(v3.rbegin(), v3.rend());

        for (ll i = 0; i < 3; i++)
        {
            for (ll j = 0; j < 3; j++)
            {
                for (ll k = 0; k < 3; k++)
                {
                    if (v1[i].second != v2[j].second && v1[i].second != v3[k].second && v2[j].second != v3[k].second)
                        ans = max(v1[i].first + v2[j].first + v3[k].first, ans);
                }
            }
        }

        cout << ans << endl;
    }
    
}