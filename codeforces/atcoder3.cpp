#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n;
    cin >> n;

    ll group = n/10;
    ll subgrp = n%10;

    if(n>=0 && n<=9) cout<<n-1<<endl;
    else if(n>=10 && n<=19) cout<<group-10<<endl;

    return 0;
}
