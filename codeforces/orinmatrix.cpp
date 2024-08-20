#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> B(n, vector<int>(m));
    vector<vector<int>> A(n, vector<int>(m, 1));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> B[i][j];
        }
    }

    // Set rows and columns to zero in A based on B
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (B[i][j] == 0) {
                for (int k = 0; k < m; k++) {
                    A[i][k] = 0;
                }
                for (int k = 0; k < n; k++) {
                    A[k][j] = 0;
                }
            }
        }
    }

    // Verify the constructed matrix A
    bool isValid = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int val = 0;
            for (int k = 0; k < m; k++) {
                val |= A[i][k];
            }
            for (int k = 0; k < n; k++) {
                val |= A[k][j];
            }
            if (val != B[i][j]) {
                isValid = false;
                break;
            }
        }
        if (!isValid) break;
    }

    if (isValid) {
        cout << "YES\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << A[i][j] << " ";
            }
            cout << "\n";
        }
    } else {
        cout << "NO\n";
    }

    return 0;
}
