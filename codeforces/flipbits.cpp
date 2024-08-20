#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

void helper(string &a, string &b, int s, int end)
{
    int zerocnt = 0;
    int onecnt = 0;

    for (int i = s; i <= end; i++)
    {
        if (a[i] == '0') zerocnt+= 1;
        if(a[i]=='1') onecnt+=1;

        int diff = onecnt - zerocnt;

        if(a[i]!=b[i] && diff==0){
            
        }
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        if (a == b)
            cout << "YES" << endl;

        else
        {
            helper(a, b, 0, n - 1);
        }
    }
}
return 0;
}
