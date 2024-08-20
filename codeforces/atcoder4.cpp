#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
vector<array<int, 2>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; 

void dfs(int r, int c, vector<vector<int>> &m, vector<vector<int>> &vis, int level) {
    if (r < 0 || c < 0 || r >= m.size() || c >= m[0].size() || vis[r][c] == 1 || m[r][c] > level) {
        return;
    }

    vis[r][c] = 1;
    
    for (auto &dir : directions) {
        int dr = dir[0];
        int dc = dir[1];
        dfs(r + dr, c + dc, m, vis, level);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int row, col, y;
    cin >> row >> col >> y;

    vector<vector<int>> m(row, vector<int>(col));
    vector<vector<int>> vis(row, vector<int>(col, 0));

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> m[i][j];
        }
    }

    int size = row * col;
    
    for (int level = 1; level <= y; ++level) {
    int sink = 0;

        fill(vis.begin(), vis.end(), vector<int>(col, 0));

        for (int i = 0; i < row; ++i) {
            if (m[i][0] <= level && vis[i][0] == 0) {
                dfs(i, 0, m, vis, level);
            }
            if (m[i][col-1] <= level && vis[i][col-1] == 0) {
                dfs(i, col-1, m, vis, level);
            }
        }
        for (int j = 0; j < col; ++j) {
            if (m[0][j] <= level && vis[0][j] == 0) {
                dfs(0, j, m, vis, level);
            }
            if (m[row-1][j] <= level && vis[row-1][j] == 0) {
                dfs(row-1, j, m, vis, level);
            }
        }

        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (vis[i][j] == 1) {
                    sink++;
                }
            }
        }
         
        cout << size - sink << endl;
    }

    return 0;
}
