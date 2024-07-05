#include<iostream>
using namespace std;
void printarray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void reverse(int arr[], int n){
    int start =0;
    int end = n-1;
    while (start<=end)
    {
       swap(arr[start], arr[end]);
       start++;
       end--;
    }
    
    

}
int main() {

    int arr1[]={1,2,3,4};
    
    reverse(arr1,4);

    printarray(arr1,4);






    
    
    
return 0;
}
