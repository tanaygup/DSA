/*  Here we implement heap using array and fill indexes starting from 1
    eg arr = x 60 50 40 30 20
    now first lets recognise
    1. Node -> i index
    2. Parent -> i/2 th index
    3. Left child -> 2i th index
    4.  Right child -> (2i+1) th index

    Insert 55 ( we insert it at last index )
    arr = x 60 50 40 30 20 55
    and we compare 55 to its parent and do swapping if needed
*/
#include<iostream>
using namespace std;
class maxheap{
    public:
    int arr[100];
    int size ;

    maxheap(){
        size = 0;
        arr[0]=-1;
    }

    void insert(int val){   // o(nlogn)
        size = size +1;
        int index = size;
        arr[index]= val;

        while(index>1){
            int parent = index/2;

            if(arr[parent]<arr[index]){
                swap(arr[index],arr[parent]);
                index = parent;
            }
            else return;
        }
    }
    void deletion(int rootNode){   // talking about root node only, tc = o(logn)
    /* STEPS-
    1.replace root node with the last node
    2. propagate the new root node to its correct position
    */
   if(size==0){
    cout<<"no items left to delete";
    return;
   }
    arr[1]=arr[size];
    size--;
    int i =1;

    while(i<size){
        int leftIndex = 2*i;
        int rightIndex = 2*i+1;
        
        if(leftIndex<size && arr[i]<leftIndex){
            swap(arr[i],arr[leftIndex]);
            i=leftIndex;
        }
        
        else if(rightIndex<size && arr[i]<rightIndex){
            swap(arr[i],arr[rightIndex]);
            i=rightIndex;
        }
        else return;
    }
    }
    void print(){
        for(int i =1; i<=size;i++){
            cout<<arr[i]<<" ";

        }cout<<endl;
    }
};
// heapify method  o(n)
// leaf noodes -> n/2 +1 ... n
/* leaf nodes are already a heap 
start from n/2 node till 1
*/
void heapify(int arr[], int n, int i){
    int largest = i;
    int leftChild = 2*i;
    int rightChild = 2*i+1;

    if(leftChild<=n && arr[largest]<arr[leftChild]) largest = leftChild;
    else if(rightChild<=n && arr[largest]<arr[rightChild]) largest = rightChild;
    
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }    
}
void buildHeap(int arr[],int n){ //o(n)
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
}
/*HEAP sort
1. Convert the array into heap (using buildheap)
2. but array is not sorted(max heap), delete elements one by one(root) and store it. 
o(nlogn)
*/
void heapsort(int arr[],int n){   // nlogn
    // build heap is called now..
    for(int i =n; i>1;i--){
        swap(arr[1],arr[i]);
        heapify(arr,n,i-1);
    }
}
int main() {
return 0;
}
