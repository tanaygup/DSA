#include <bits/stdc++.h> 
using namespace std;
class Queue {
public:
    Queue() {
        // Implement the Constructor
        int size = 100001;
        int* arr = new int[size];
       int front = 0;
        int rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty(int rear,int front) {
        // Implement the isEmpty() function
        if(rear==front){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data,int rear,int size,int* arr) {
        // Implement the enqueue() function
        if(rear==size){
            cout<<"queue is full "<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue(int front, int rear, int* arr) {
        // Implement the dequeue() function
        if(front == rear){
            cout<<"queue is empty"<<endl;
        }
        else{
            int ans = arr[front];
            arr[front] = -1;
            front ++;
            if(front==rear){
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front(int front, int rear , int* arr) {
        // Implement the front() function
        if(front == rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }
};
