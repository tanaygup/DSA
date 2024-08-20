#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        vector<int> arr = {a, b, c};
        sort(arr.begin(), arr.end());
        int remaining_increments = 5;

        
        while (remaining_increments > 0 && arr[0] < arr[1]) {
            arr[0]++;
            remaining_increments--;
        }

        while (remaining_increments > 0 && arr[1] < arr[2]) {
            arr[1]++;
            remaining_increments--;
        }

        
        while (remaining_increments > 0 && arr[0] < arr[1]) {
            arr[0]++;
            remaining_increments--;
        }

        
        while(remaining_increments>0) {
            arr[0]++;
            remaining_increments--;
            if(remaining_increments>0){
              arr[1]++;
            remaining_increments--;
            }
            if(remaining_increments>0){
               arr[2]++;
            remaining_increments--;
            }
        }

        int ans = arr[0] * arr[1] * arr[2];
        cout << ans << '\n';
    }

    return 0;
}
