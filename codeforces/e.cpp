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
        int l,r;
        cin>>l>>r;
        int n = r-l+1;
        vector<int> v(n);

        for(int i=0;i<n;i++){
            v[i]=l;
            l++;
        }

        int ans = 0;
        while(true){
            if(v[0]!=0){
                v[0] = (v[0]/3);
                v[1] = v[1]*3;
                ans++;
            }
            else break;
        }

        int i=1;
        while(i<n){
            if(v[i]!=0){
                v[i] = (v[i]/3);
                ans++;
            }
            else i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
