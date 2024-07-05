#include<iostream>
#include<string.h>
using namespace std;
class hero{
    private:
    int health;

    public:
    char* name ;
    char level;
    static int timetocomplete;

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
int hero::timetocomplete = 5;
int main() {
    
    cout<<hero::timetocomplete<<endl;
    hero a;
    cout<<a.timetocomplete<<endl;
    hero b;
    b.timetocomplete = 10;
    cout<<b.timetocomplete<<endl;
    cout<<a.timetocomplete<<endl;
    
    
return 0;
}