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
    };
    void insertAtTail(Node* &tail , int d){
        Node* temp = new Node(d);
        if (tail==NULL)
        {
            tail = temp;
        }
        else{
       tail -> next = temp;
       tail= tail ->next;}
    };
  
    
    void print(Node* &tail){
        Node* temp = tail;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
        
    }
     void Print(Node* &head){
        Node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;

        }
        cout<<endl;
        
    }};
int main() {
    Node* node1 = new Node(10);
    Node* tail = node1;
    Node* head = node1;
    node1->insertAtTail(tail,12);
    node1->insertAtTail(tail , 14);
    node1->print(tail);
    node1->Print(head);
    


return 0;
}
