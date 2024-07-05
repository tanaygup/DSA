// implementation of stack using linked list
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top == NULL;
    }

    void push(int x)
    {
        Node *t = new Node;
        if (t == NULL)
        {
            cout << "full";
        }
        else
        {
            t->data = x;
            t->next = top;
            top = t;
        }
    };

    int pop(){
        int x;
       if (top==NULL)
       {
        cout<<"empty";
       }
       else{
        x=top->data;
        Node* t = top;
        top=top->next;
        delete t;
       }
       
       return x;
    };

    void display(){
        Node* p = top;
        while(p!=NULL){
            cout<<p->data;
            p = p->next;
        }
    };
};

int main()
{
    return 0;
}
