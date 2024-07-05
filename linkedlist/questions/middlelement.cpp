/*#include<iostream>
using namespace std;
// code for node 

// start
int getLength(Node* head){
    int len = 0;
    while(head!=NULL){
        len++;
        head = head->next;
    }
    return len;
}

Node* middle(Node* head){
    int len = getLength(head);
    int ans = (len/2);

Node* temp = head;
int cnt = 0;
while (cnt<ans)
{
    temp = temp=>next;
    cnt++;
}
retun temp;}


int main() {
return 0;
}


method 2
Node* getmiddle(head){
    if(head==NULL||head->next==NUll){
        return head;
    }
    if(head->next=>next==Null){
        return head->next;
    }

    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}*/
