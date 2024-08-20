#include <bits/stdc++.h>
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

        vector<vector<int>> grid(n, vector<int>(n));
        
        for (int i = 0; i < n; i++) {
            string row;
            cin >> row;
            for (int j = 0; j < n; j++) {
                grid[i][j] = row[j] - '0';
            }
        }

        int m = n / k;
        vector<vector<int>> output(m, vector<int>(m));

        for (int i = 0; i < n; i += k) {
            for (int j = 0; j < n; j += k) {
                output[i / k][j / k] = grid[i][j];
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                cout << output[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
