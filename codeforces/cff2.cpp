#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main() {
ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
int t; cin >> t;
while(t--){
    int n,k;
    cin>>n>>k;

    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.begin(),a.end());
    int maxi = a[n-1];

    for(int i=maxi; i<maxi + k;k++){
        
    }

}
return 0;
}
