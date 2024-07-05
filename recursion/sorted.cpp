#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if (size == 0|size == 1)
    {
        return true;
    }
    if (arr[0]>arr[1])
    {
        return false;
    }
    else{ bool remaining = isSorted(arr+1, size-1);
    return remaining;}
    
}
int main() {
    int arr[5]={2,3,5,6,8};
    int size =5;
    bool ans = isSorted(arr,5);
    if (ans)
    {
        cout<<"Array is sorted"<<endl;
    }
    else cout<< "Array is not sorted "<<endl;
return 0;
}
