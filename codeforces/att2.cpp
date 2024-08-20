#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min_operations(vector<int>& P, int N) {
    if (is_sorted(P.begin(), P.end())) {
        return 0;
    }

    if (P[0] == 1 || P[N-1] == N) {
        return 1;
    }

    if (P[0] == N && P[N-1] == 1) {
        return 3;
    }

    return 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    vector<int> results(T);

    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;
        vector<int> P(N);
        for (int i = 0; i < N; ++i) {
            cin >> P[i];
        }
        results[t] = min_operations(P, N);
    }

    for (int t = 0; t < T; ++t) {
        cout << results[t] << "\n";
    }

    return 0;
}
