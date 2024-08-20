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
        int n, s, m;
        cin >> n >> s >> m;

        vector<vector<int>> task(n, vector<int>(2));

        for (int i = 0; i < n; i++)
        {
            cin >> task[i][0] >> task[i][1];
        }

        

        int left = m,maxi = 0;
        left -= task[0][1] - task[0][0];
        for(int i=1;i<n;i++){
            left -= task[i][1] - task[i][0];
            maxi = max(maxi,task[i][0] - task[i-1][1]);
        }

        maxi = max(maxi,task[0][0]);
        maxi = max(maxi,m-task[n-1][1]);

    
        if(left>=s && maxi>=s) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
