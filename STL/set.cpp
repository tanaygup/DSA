#include<iostream>
#include<set>
// It stores element only one time. like if there are 4 5s then only 1 5 will be stored. Elements cannot be modified later, either 
// daale ya delete. Prints in sorted order.
//  Unordered set is faster than set.
using namespace std;
int main() {
    set <int> s;
    s.insert(5);
    s.insert(3);
    s.insert(7);
    s.insert(1);
    // complexity of insert is O(log n)

    for(auto i:s){
        cout<<i<<endl;
    }
    set<int> :: iterator it = s.begin();
    it++;
    s.erase(it);
    // s.count(5) tells if 5 is there in set or not

return 0;
}
