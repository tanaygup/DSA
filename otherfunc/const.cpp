#include<iostream>
using namespace std;
int main() {
    int j=12;
    const int &k=j; // OR INT CONST &K=J;
    j++;
    cout<<k<<endl;
    // we cannot use k++ as path is constant but actual storage constant nhi hoti 


/* int const j=12;
int &k=j;
k++;
this will not work*/
/*you cannot store address of a const int on a normal pointer
we use */
int const i=10;
int const *p=&i;
//(*p++) not allowed

int m=12;
int const*p2=&m;
cout<<*p2<<endl;
p2++;
cout<<*p2<<endl;
return 0;
}

