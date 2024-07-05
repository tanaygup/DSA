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
      
    void insertAtHead(Node* &head , int d){
        
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
        
    };
      void Print(Node* &head){
        Node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;

        }
        cout<<endl;
        
    }
    
    void insert(Node* &head,int position , int d){
        Node* temp = head;
        int cnt =1 ;
        while (cnt < position - 1)
        {
            temp = temp->next;
            cnt ++;
        }
        Node* nodetoInsert = new Node(d);
        nodetoInsert->next = temp->next;
        temp->next = nodetoInsert;
        



    }};
int main() {
      Node* node1 = new Node(10);
    Node* tail = node1;
    Node* head = node1;
    

    node1->insertAtTail(tail,12);
    node1->insertAtTail(tail , 14);
    
    node1->Print(head);
    node1->insert(head , 2 ,22);
    node1->Print(head);
    
   
return 0;
}
