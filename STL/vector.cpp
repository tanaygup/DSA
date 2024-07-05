#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    // another way
    vector<int> a(5,1); // here 5 is the size and all elements are initialized to 1
    vector<int> b(a); // now vector a is copied to vector b

    cout << "size->" << v.capacity() << endl;
    v.push_back(1);
    cout << "size->" << v.capacity() << endl;
    v.push_back(2);
    cout << "size->" << v.capacity() << endl;

    v.push_back(3);
    cout << "size->" << v.capacity() << endl;
    // we can use v.size,v.at,v.front,v.back

    cout<<"before pop "<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    cout<<"after pop "<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    v.clear(); // after clearing, size of vector = 0, but capacity does not change


    

    return 0;
}
