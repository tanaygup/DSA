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
    
    if(t>=1 && t<=99){
        cout << 100-t << endl;
    }
    else if(t>=100 && t<=199){
        cout << 200-t << endl;
    }
    else if(t>=200 && t<=299){
        cout << 300-t << endl;
    }
    
    return 0;
}
