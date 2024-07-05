#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight ;
    int age;

    public:
    int getage(){
        return this->age;
    }
    void setweight(int w){
        this->weight=w;
    }

};
class male : protected Human{
    public:

    string colour;

    void sleep()
{
    cout<<"sleeping"<<endl;
}
int getheight(){
    return this->height;
}
};
int main() {

    male obj1;
    cout<<obj1.getheight()<<endl;
    cout<<obj1.colour<<endl;
return 0;
}
