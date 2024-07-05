// implement stack using linked list
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this->data=data;
        this->next = NULL; 
    }
};

class Stack:public Node{
    public:
    Node* top;

    Stack(){
      
    }
    
};
int main() {
return 0;
}
