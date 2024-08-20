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

    while (n>=0)
    {
        if(n%11==0) {cout<<"YES"<<endl;
        break;}

        n -= 111;
        if(n<0) break; 
    }
    if(n<0) cout<<"NO"<<endl;
    

   
    
    

}
return 0;
}
