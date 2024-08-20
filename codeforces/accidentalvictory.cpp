#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool win(int pos, const vector<long long>& a) {
    long long power = a[pos];
    for (int i = 0; i < a.size(); ++i) {
        if (i == pos) continue;
        if (power < a[i]) return false;
        power += a[i];
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        t--;
        int n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> b(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(a.begin(), a.end());

        int l = -1;
        int r = n - 1;
        while (r - l > 1) {
            int m = (l + r) / 2;
            if (win(m, a)) {
                r = m;
            } else {
                l = m;
            }
        }

        vector<int> winIds;
        for (int i = 0; i < n; ++i) {
            if (b[i] >= a[r]) {
                winIds.push_back(i + 1);
            }
        }

        cout << winIds.size() << endl;
        for (int id : winIds) {
            cout << id << " ";
        }
        cout << endl;
    }

    return 0;
}
