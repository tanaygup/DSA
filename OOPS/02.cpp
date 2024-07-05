#include<iostream>
using namespace std;
class hero{
    public:
    int health;
    

    
    char level;
    void print(){
    cout<<level<<endl;}

};
int main() {
    hero tanay;
    tanay.health=80;
    tanay.level='E';
    cout<<tanay.health<<endl;
    cout<<tanay.level<<endl;
    

return 0;
}
