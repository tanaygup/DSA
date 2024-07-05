#include<iostream>
using namespace std;
int sum(int *arr,int size){
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    else {
        int remaining = sum(arr+1,size-1);
        int sum = arr[0]+ remaining;
        return sum;

    }
    
    
}
int main() {
    int arr[5]={2,3,5,6,8};
    int size =5;
    cout<<"the sum of the array is "<<sum(arr,5)<<endl;

return 0;
}
