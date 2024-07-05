#include<iostream>
#include<array>
using namespace std;
int main() {
    array<int,4>a={1,2,3,4};
    int size = a.size();
    cout<<"Element at index 2 is "<<a.at(2)<<endl;
    cout<<"is array empty or not "<<a.empty()<<endl;
    cout<<"first element "<<a.front()<<endl;
    cout<<"last element "<<a.back()<<endl;
return 0;
}
