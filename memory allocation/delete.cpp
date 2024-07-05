#include<iostream>
using namespace std;
int main() {

    // to delete the dynamically allocated memory we have to delete it manually. For this we use delete keyword
    int* p= new int;
    delete p; // for array delete []p
return 0;

}
