#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int ceil_div(int a, int b) {
    return (a + b - 1) / b;
};

int main() {
ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
int t; cin >> t;
while(t--){
    int n,k;
    cin>>n>>k;

    int ans = ceil_div(n-1,k-1);
    cout<<ans<<endl;
}
return 0;
}
