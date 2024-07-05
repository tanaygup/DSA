#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(6);
    v.push_back(7);

    cout<<"finding 6 "<<binary_search(v.begin(),v.end(),6)<<endl;
    // we can use max(a,b) or min (a,b) or swap(a,b)

    string a = "abcd";
    reverse(a.begin(),a.end());
    cout<<"string is "<<a<<endl;
return 0;
}
