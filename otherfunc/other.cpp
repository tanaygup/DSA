#include<iostream>
using namespace std;
inline int max(int a, int b){
    return (a>b)?a:b;
}

// inline copies the return part to int c , improves performance
// inline is used whenever we have very small function 1 or 2 lines. Inline is like asking compiler please use this function.
// if function is big , inline may not work.
int main() {

    int a,b;
    cin>>a>>b;
    int c=max(a,b);
    cout<<c;
return 0;
}
