
#include <iostream>
#include <vector>
using namespace std;

// for one subsequence only

bool ans(int ind, int n, int s, int sum, vector<int> &v, int arr[])
{

    if (ind == n)
    {
        if (s == sum)
        {
            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }

              else return false;
    }

    v.push_back(arr[ind]);
    s += arr[ind];
   if( ans(ind + 1, n, s, sum, v, arr)==true){
    return true;
   };
    v.pop_back();
    s -= arr[ind];

    if(ans(ind + 1, n, s, sum, v, arr)==true){
        return true;
    };

    return false;
};
int main()
{

    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;

    vector<int> v;
    ans(0, 3, 0, sum, v, arr);
    return 0;
}
