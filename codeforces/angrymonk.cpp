#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        priority_queue<int, vector<int>, greater<int>> minH;
        for (int i = 0; i < k; ++i) {
            int a;
            cin >> a;
            minH.push(a);
        }
        
        int ans = 0;

        while (!minH.empty()) {
            int top = minH.top();
            minH.pop();
            
            if (top == n) break;

            if (top == 1) {
                if (!minH.empty()) {
                    int b = minH.top();
                    minH.pop();
                    minH.push(top + b);
                    ans++;
                }
            } else {
                minH.push(1);
                minH.push(top - 1);
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
