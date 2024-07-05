#include<iostream>
using namespace std;
int search(int arr[], int size , int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
        
        
    }
    return -1;
    


}
int main() {
    
    int arr[]= {2,3,4,5,1};
    
    int key;
    cin>>key;
    int size = sizeof(arr)/sizeof(int);

   int found = search( arr,size,key);

   cout<<"The element was found at index "<<found<<endl;

    
   
return 0;
}