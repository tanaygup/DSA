#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int n, x; 
    cin >> n >> x;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
 
    vector<int> dp(x + 1, 1e8);
    dp[0] = 0;
 
    for(int i = 0; i < n; i++) {
        for(int j = nums[i]; j <= x; j++) {
            dp[j] = min(dp[j], dp[j - nums[i]] + 1);
        }
    }
 
    if(dp[x] == 1e8) 
        cout << -1 << endl;
    else 
        cout << dp[x] << endl;
 
   return 0;
}