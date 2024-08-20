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
        int n, k;
        cin >> n >> k;

        if (k == 0)
        {
            cout << 0 << endl;
        }
        else if (k == n * n)
        {
            cout << 2 * n - 1 << endl;
        }

        
        else{
            int count = 0;
        if (k > 0)
           { k -= n;
            count++;}
        for (int i = n - 1; i > 0; i--)
        {
            if (k <= 0)
                break;

            else
            {
                k -= i;
                count++;
                if (k > 0)
                {
                    k -= i;
                    count++;
                }
            }
        }
        cout << count << endl;
        }
        
    }
    return 0;
}
