#include<iostream>
#include<string.h>
using namespace std;
class hero{
    private:
    int health;

    public:
    char* name ;
    char level;

    hero(){
        cout<<"simple constr is called "<<endl;
        name = new char[100];
    }
     //Paramerterised Constructor
    hero(int health) {
        this -> health = health;
    }

    hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    //copy constructor
    hero(hero& temp) {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }


};
int main() {
    hero hero1;
    
    hero1.setHealth(20);
    hero1.setLevel('D');
    char name[6]= "tanay";
    hero1.setName(name);
    hero1.print();

    // using default copy constructor
   
    hero hero2(hero1);

    hero2.print();

    hero1.name[0]='m';
    hero1.print();

    hero2.print();
    // name of hero2 also changes , shallow copy
return 0;
}