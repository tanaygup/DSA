#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main() {
ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
int t; cin >> t;
while(t--){
    int n;
    cin>>n;

    vector<int> b(n+2);
    for(int i=0;i<n+2;i++) cin>>b[i];

    sort(b.begin(),b.end());

    int max1 = b[n+1];
    int max2 = b[n];

    vector<int> prefix(n+2);
    prefix[0] = b[0];
    for(int i=1;i<n+2;i++) prefix[i] = prefix[i-1] + b[i];


}
return 0;
}
