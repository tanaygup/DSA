#include<iostream>
using namespace std;
int findDuplicate(int arr[], int size){
    int ans =0;
    

    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    for (int i = 0; i <= size-1 ; i++)
    {
        ans= ans^i;
    }
    return ans;
    
    
}
int main() {

    int arr[]={1,2,3,7,8,2};
    int size = sizeof(arr)/ sizeof(int);
    cout<<findDuplicate(arr,size);

return 0;
}
