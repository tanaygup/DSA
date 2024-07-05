#include<iostream>
using namespace std;

void solve(int n , char A,char B,char C){
    if(n>0){
        solve(n-1,A,C,B);
        cout<<"move from "<<A<<" to "<<B<<endl;
        solve(n-1,B,A,C);
    }
}
int main() {
return 0;
}
