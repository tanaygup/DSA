#include<iostream>
using namespace std;
int main() {
    // to allocate memory in heap we use new. eg new int , new double

    
    int* p = new int;
    *p = 15;
    cout<<*p;

    // now we can do this 
    /*
    int n;
    cin>>n;
    int* pa=new int[n];
    pa[0]=10;
    
    
    */
return 0;
}
