#include<iostream>
using namespace std;
int main() {

    int a=20;
    int* p = &a;
    int* *p2 = &p;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;
return 0;
}
