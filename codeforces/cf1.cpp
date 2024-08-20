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
    int count = 0;
    if(n==0) cout<<0<<endl;
    if(n==2) cout<<1<<endl;
    else{
        int cow = (n/4);
        int rem = n%4;
        int chi = rem/2;
        count = cow + chi;
        cout<<count<<endl;
    }

    

}
return 0;
}
