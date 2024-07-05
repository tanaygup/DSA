#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    // destructor
    ~Node(){
        int val = this->data;
        if (next!=NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"memory is free for the data "<<val<<endl;
    }

    void Print(Node *head)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtHead(Node *&head, int d)
    {

        if (head == NULL)
        {
            Node *temp = new Node(d);
            head = temp;
        }
        else
        {
            Node *temp = new Node(d);
            temp->next = head;
            head->prev = temp;
            temp->prev = NULL;
            head = temp;
        }
    }
    void insertAtTail(Node *&tail, int d)
    {
        Node *temp = new Node(d);

        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    };
    void insert(Node *&head, int position, int d)
    {
        Node *temp = head;
        int cnt = 1;
        while (cnt < position - 1)
        {
            temp = temp->next;
            cnt++;
        }
        Node *nodetoInsert = new Node(d);
        nodetoInsert->next = temp->next;
        temp->next->prev = nodetoInsert;
        temp->next = nodetoInsert;
        nodetoInsert->prev = temp;
    }
     void Delete(Node *&head, int position)
    {

        // deleting start node
        if (position == 1)
        {
            Node *temp = head;
            temp->next->prev = NULL;
            head = temp->next;
            temp->next=NULL;
            delete temp;
        }
        else
        {
            Node *curr = head;
            Node *prev = NULL;
            int cnt = 1;
            while (cnt < position)
            {
                prev = curr;
                curr = curr->next;
                cnt++;
            }
            curr->prev = NULL;
            prev->next = curr->next;
            curr->next=NULL;
            delete curr;
        }
    }
    
    
    
    };
    int main()
    {
        Node *node1 = new Node(10);
        Node *head = node1;
        Node *tail = node1;
        node1->Print(head);
        node1->insertAtHead(head, 12);
        node1->Print(head);
        node1->insertAtTail(tail, 14);
        node1->Print(head);
        node1->insert(head , 3,16);
        node1->insert(head , 4,18);
        node1->Print(head);

        return 0;
    }
