#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<string> s;
    s.push("hello");
    s.push("Tanay");
    s.push("Gupta");
    s.pop();
    cout<<"top element is "<<s.top()<<endl;
return 0;
}
