#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *tree(Node *root)
{
    cout << "enter the data " << endl;
    int data;
    cin >> data;

    root = new Node(data);
    if (data == -1)
    {
        cout << "Enter data for inserting in left of " << data << endl;
        root->left = tree(root->left);
        cout << "Enter data for inserting in right of " << data << endl;
        root->right = tree(root->right);
    }
    return root;
}

void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << ' ';
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
// lnr
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// nlr
void preorder(Node* root){
    if (root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void buildfromLevelorder(Node* root){
    queue<Node*> a;
    cout<<"enter data for root"<<endl;
    int data;
    cin>>data;

    root = new Node(data);
    a.push(root);

    while(!a.empty()){
        Node* temp = a.front();
        a.pop();

        cout<<"enter left node for: "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if (leftdata!=-1)
        {
               temp->left=new Node(leftdata);
               a.push(temp->left);
        }

         cout<<"enter right node for: "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if (rightdata!=-1)
        {
               temp->right=new Node(rightdata);
               a.push(temp->right);
        }
        
    }
}
int main()
{
    Node *root = NULL;
    root = tree(root);
    return 0;
}
