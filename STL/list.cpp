#include<iostream>
#include<list>
// Implementation of a list is due to double linked list. Direct access is not possible, eg at operation is not possible here
using namespace std;
int main() {
    list<int> l;
    l.push_back(1);
    l.push_front(2);
   
     for (int i:l)
    {
        cout<<i<<" ";
    }cout<<endl;
    l.erase(l.begin());
     for (int i:l)
    {
        cout<<i<<" ";
    }cout<<endl;
    
return 0;
}
