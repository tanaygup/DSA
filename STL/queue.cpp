#include<iostream>
#include<queue>
using namespace std;
int main() {
    queue<string> q;
    q.push("Hello");
    q.push("World");
    q.push("!");
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    
return 0;
}
