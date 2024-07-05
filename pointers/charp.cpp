#include<iostream>
using namespace std;
int main() {

    char b[]="abc";
    char*p= &b[0];

    char c1='a';
    char* pc=&c1;

    cout<<p<<endl;
    cout<<pc<<endl;
return 0;

}
// char str[]="abc" and char *pstr="abc" will print the same thing but array will give permanent memory location while pointer will give
// temporary mem location. We should use array as assigning a temp memory to pointer can cause faults while printing.
