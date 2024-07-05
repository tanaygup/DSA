#include<iostream>
using namespace std;
int main() {
    int a[10];
    cout<<a<<endl;
    cout<<&a<<endl; //a is behaving like a pointer

    a[0]=4;
    cout<<*a<<endl;
    //  cout<<*(a+1) will give value of a[1] , *(a+i)=a[i]=i[a]

    // array cannot be reassigned in address
    // a cannot be equal to a+3
    // a!=p but p=a

    int * p = a;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<&a<<endl;
    cout<<&p<<endl;

    cout<<sizeof(a)<<endl; // ans is 40
    cout<<sizeof(p)<<endl; // ans is 8

    // p=p+1 correct
    // a=a+1 incorrect
    // p=a+1 correct

return 0;
}
