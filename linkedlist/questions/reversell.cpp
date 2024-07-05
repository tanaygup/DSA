// reversing a linked list


// #include<iostream>
// using namespace std;
// // code for node

// // code for reverse LL by iterative method
// Node* ReverseLL(int Node* head){
// if(head==NULL||head->next = NULL){
//         return head;
//     }
//      else {
//         LinkedListNode *prev = NULL;
//         LinkedListNode *curr = head;
//         LinkedListNode *forward = NULL;

//         while (curr != NULL) {
//           forward = curr->next;
//           curr->next = prev;
//           prev = curr;
//           curr = forward;

//         }
//         return prev;
//     }
// }

// // recursion
// void reverse(Node* &head,Node*curr,Node* prev){
//     if (curr==NULL)
//     {
//         head = prev;
//         return;
//     }
//     Node* forward = curr -> next;
//     reverse(head,forward,curr);
//     curr->next = prev;
    
// }
// // recursion pt2
// void resverse(Node* head){
//     if (head == NULL|| head->next==NULL)
//     {
//         return head;
//     }

//     Node* chotahead = reverse(head->next);

//     head->next->next = head;
//     head->next = NULL;

//     return chotahead;

    
// }
// int main() {
// return 0;
// } 
