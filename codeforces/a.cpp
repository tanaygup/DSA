#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main() {
ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
int t; cin >> t;
while(t--){
    int a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    // int maxia=0,maxib=0;

    // if(a1>a2) maxia=a1;
    // if(a1<a2) maxia = a2;
    // if(b1<b2) maxib = b2;
    // if(b2<b1) maxib = b1;
    
    int ans = 0;
    if ((a1 > b1 && a2 > b2) || (a1 > b1 && a2 == b2) || (a1 == b1 && a2 > b2)) ans++;
    if ((a1 > b2 && a2 > b1) || (a1 > b2 && a2 == b1) || (a1 == b2 && a2 > b1)) ans++;
    if ((a2 > b1 && a1 > b2) || (a2 > b1 && a1 == b2) || (a2 == b1 && a1 > b2)) ans++;
    if ((a2 > b2 && a1 > b1) || (a2 > b2 && a1 == b1) || (a2 == b2 && a1 > b1)) ans++;

    cout<<ans<<endl;
    

}
return 0;
}
