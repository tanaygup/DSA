#include<iostream>
using namespace std;
  void increment(int& n) {
        n++;
    }
int main() {
  
    int i;
    i=10;
    increment(i);
    cout<<i<<endl;
   int& j = i;
    // we cannot do like int&j;
    // j=i; as we have initialize it on starting only
    i++;
    cout<<j<<endl;
    j++;
    cout<<i<<endl; 
    int k=100;
    j=k;
    cout<<i<<endl; 

return 0;
}
