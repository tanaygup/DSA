#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main() {

    unordered_map<string,int> m;

    // insertion ways

    // 1
    m["tanay"]=1;
    // now it will update the value to 2
    m["tanay"]=2;

    // 2
    pair<string,int> p("tanya", 2);
    m.insert(p);

    // 3
    pair<string,int> p2 = make_pair("tan", 3);
    m.insert(p2);

    // search

    cout<<m["tanay"]<<endl;

    cout<<m["gupta"]<<endl;
    cout<<m.at("gupta")<<endl;
    
    // check presence

    cout<<m.count("tanay")<<endl;


    // iterator
    unordered_map<string,int> :: iterator it = m.begin();

    while(it != m.end()){
      cout<<it->first <<" "<<it->second;
      it++;
    }

return 0;
}
