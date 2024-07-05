#include <bits/stdc++.h> 
using namespace std;
class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    // Initialize your data structure.

    CircularQueue(int n){
        // Write your code here.
        size = n;
        front = rear =-1;
        arr = new int[size];


    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        if((front==0&&rear==size-1)||(rear==(front-1)%(size-1))){
            cout<<"queue is full"<<endl;
            return false;
        }
        if(front==-1){
            front=rear=0;
    
        }

        if(rear==size-1 && front!=0){
                  rear=0;
            
        }
        else {
      rear++;
      }
      arr[rear]=value;
      return true;
    };

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        if(front==-1){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        int ans = arr[front];
        arr[front]=-1;
        if(front==rear){
            front = rear-1;

        }
        if(front==size-1){
                   front =0;
        }
        else front++;

        return ans;
    }
};