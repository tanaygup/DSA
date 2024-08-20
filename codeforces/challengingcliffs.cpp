#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pi;
const int MOD = 1e9 + 7;
int main() {
ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
int t; cin >> t;
while(t--){
    int n;
    cin>>n;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin>>h[i];
    }
    
    vector<int> ans;    

    // unordered_map<int,int> mp;
    // for (int i = 0; i < n; i++)
    // {
    //     mp[h[i]]++;
    // }
    //   priority_queue<pi, vector<pi>, greater<pi> > pq; 

    int mini =INT_MAX;
    int idx = 0;
    sort(h.begin(),h.end());
     if(n == 2){
            cout << h[0] << " " << h[1] << "\n";
            continue;
        }

    for (int i = 1; i < n; i++)
    {
        if(abs(h[i] - h[i-1]) < mini){
       mini = abs(h[i]-h[i-1]);
       idx = i;
        }
    }
    // int a = pq.top().first;
    // int b = pq.top().second;
    
    for(int i=idx;i<n;i++) ans.push_back(h[i]);
    for(int i=0;i<idx;i++) ans.push_back(h[i]);
    
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    

    
}
return 0;
}
