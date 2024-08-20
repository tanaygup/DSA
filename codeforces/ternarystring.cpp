#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <climits>
using namespace std;

int findShortestSubstring(const string &s) {
    unordered_map<char, int> count;
    int left = 0, minLength = INT_MAX;
    int n = s.length();

    for (int right = 0; right < n; ++right) {
        count[s[right]]++;
        
        while (count['1'] > 0 && count['2'] > 0 && count['3'] > 0) {
            minLength = min(minLength, right - left + 1);
            count[s[left]]--;
            left++;
        }
    }

    return (minLength == INT_MAX) ? 0 : minLength;
}

int main() {
    int t;
    cin >> t;
    vector<string> testCases(t);

    for (int i = 0; i < t; ++i) {
        cin >> testCases[i];
    }

    for (const string &s : testCases) {
        cout << findShortestSubstring(s) << endl;
    }

    return 0;
}
