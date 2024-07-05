#include<iostream>
using namespace std;
int main() {
    int i =10;
    char c = i;  // implicit typecasting 
    char d=i;
    int*p=&i;
  //  char*p2=p;  // we cannot do typecasting like this .
  char*p2 = (char*)p; //explicit typecasting

    cout<<c<<endl;
    cout<<d<<endl;
    cout<<*p<<endl;
    cout<<*p2<<endl;
    cout<<*(p2+1)<<endl;
    cout<<*(p2+2)<<endl;
    cout<<*(p2+3)<<endl;
    
    // this implies integer is kept like 10 0 0 0
    cout<<p<<endl;
    cout<<p2<<endl;
return 0;
}
