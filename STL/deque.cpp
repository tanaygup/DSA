// Also dynamic 
#include<iostream>
#include<deque>
using namespace std;
int main() {
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
     for (int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;
   /* d.pop_back();
     for (int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;  */

    // can use d.front,back,empty,at
    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase "<<d.size()<<endl;
return 0;
}
