#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int helper(int n,vector<int>& dp){
    
    if(n==0) return 1;
    if(n<0) return 0;
    if(dp[n]!=-1) return dp[n];
    int ans = 0;
    for(int i=1;i<=6;i++){
       ans = (ans + helper(n-i, dp)) % MOD;
    }
    return dp[n]= ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    vector<int> dp(t+1,-1);
    cout<<helper(t,dp) % MOD<<endl;
    return 0;
}
