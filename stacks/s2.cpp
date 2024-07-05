#include<iostream>
using namespace std;
// implement stack without stl

class Stack{
    public:
    int top;
    int *arr;
    int size;

    Stack(int size){
        this->size=size;
        arr = new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else cout<<"stack overflow";


    }

    void pop(){
        if(top>=0){
            top--;
        }
        else cout<<"stack underflow";
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
    }
    bool isempty(){
         if(top==-1){
            return true;
         }
    }

};
int main() {
return 0;
}
