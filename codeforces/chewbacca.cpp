#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;


long long vectorToLongLong(const vector<int>& v) {
    long long result = 0;
    for (int digit : v) {
        result = result * 10 + digit;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    
    
        string n;
        cin >> n;

        
        vector<int> v(n.size());
        for (int i = 0; i < n.size(); i++) {
            v[i] = n[i] - '0'; 
        }

        
        if (v[0] != 9 && v[0] > 4) {
            v[0] = 9 - v[0];
        }
        for (int i = 1; i < n.size(); i++) {
            if (v[i] > 4) {
                v[i] = 9 - v[i];
            }
        }

        
        cout << vectorToLongLong(v) << endl;
    

    return 0;
}
