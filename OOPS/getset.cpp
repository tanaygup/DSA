#include<iostream>
using namespace std;
class hero{
    private:
    int health;
   

    public:
    char level;

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }
  

};
int main() {
    // static allocation
    hero tanay;
    cout<<"tanay health is : "<<tanay.gethealth()<<endl;
    tanay.sethealth(70);
    cout<<"tanay health is : "<<tanay.gethealth()<<endl;

    // dynamic allocation
     hero *h = new hero;
     h ->sethealth(80);
     h->setlevel('B');
     cout<<"tanay health is : "<<(*h).gethealth()<<endl;


   
return 0;
}
