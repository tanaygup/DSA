#include<iostream>
using namespace std;
void printarray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void altswap(int arr[], int n){
    for (int i = 0; i < n; i=i+2)
    {
        if (i+1<n)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    
}
    
int main() {
    int arr[]={1,2,3,4,5,6};
    int arr2[]={7,8,9,10,11};
    altswap(arr,6);
    printarray(arr,6);

     altswap(arr2,5);
    printarray(arr2,5);


return 0;
}
