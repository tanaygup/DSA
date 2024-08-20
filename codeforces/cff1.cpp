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
        int ans = 0;
        vector<ll> v(n);
        vector<ll> e(n);
        priority_queue<ll> o;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int even = 0;
        int odd = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 1)
                o.push(v[i]);
            else
                e.push_back(v[i]);
        }

        if (e.size()==0||e.size()==n)
            cout << 0 << endl;
        else
        {
            // priority_queue<ll, vector<ll>, greater<ll>> e;

            sort(e.begin(), e.end());
            
            int a1=0,a2=0;
            
            for(int i=0;i<e.size();i++){
                int x = o.top();
                int y = e[i];
                if(x>y){
                    a1++;
                    o.pop();
                    o.push(y+x);
                }
                else{
                    
                }
            }
            
        }
    }
    return 0;
}