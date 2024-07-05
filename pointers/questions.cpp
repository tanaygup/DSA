#include<iostream>
using namespace std;
int main() {
// how to assign null pointer
    int* p=0;
    int f=12;
    p=&f;
    cout<<*p;
return 0;
}
