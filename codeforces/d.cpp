#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

bool isSub(string &s, string &t, int n, int m)
{
    if (m == 0)
        return true;
    if (n == 0)
        return false;
    int j = 0;
    for (int i = 0; i < n && j < m; i++)
    {
        if (s[i] == t[j])
        {
            j++;
        }
    }
    return (j == m);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s = "";
        string t = "";

        cin >> s >> t;

        int n = s.size();
        int m = t.size();

        int i = 0;
        int j = 0;
        while (i < n && j < m)
        {
            if (s[i] == t[j])
            {

                j++;
            }
            else if (s[i] == '?')
            {
                s[i] = t[j];

                j++;
            }
            i++;
        }

        for (int i = 0; i < n; i++)
            if (s[i] == '?')
                s[i] = 'a';

        if ((j == m) && isSub(s, t, n, m))
        {
            cout << "YES" << endl;
            cout << s << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
