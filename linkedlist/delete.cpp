#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    };
    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for the data " << data << endl;
    }
    void insertAtTail(Node *&tail, int d)
    {
        Node *temp = new Node(d);
        if (tail == NULL)
        {
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = tail->next;
        }
    };

    void insertAtHead(Node *&head, int d)
    {

        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
    };
    void Print(Node *&head)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

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
        temp->next = nodetoInsert;
    };
    void Delete(Node *&head, int position)
    {

        // deleting start node
        if (position == 1)
        {
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
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
            prev->next = curr->next;
            curr->next=NULL;
            delete curr;
        }
    }
};
int main()
{
    Node *node1 = new Node(10);
    Node *tail = node1;
    Node *head = node1;

    node1->insertAtTail(tail, 12);
    node1->insertAtTail(tail, 14);
    node1->insertAtTail(tail,18);

    

    node1->Delete(head,2);
    node1->Print(head);

    return 0;
}
