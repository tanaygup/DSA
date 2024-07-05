// USED IN SMALL SIZED ARRAY
#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++)
    //for round 1 to n-1 
    {
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[minIndex])
            {
               minIndex=j; 
            }
            
        }
        swap(arr[minIndex],arr[i]);
}};
void printArray(int arr[],int n){
    int i;
    for ( i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
       
    }
    
}
int main() {
            int array[6]={2,5,7,9,1,6};
            
            selectionSort(array,6);
            printArray(array,6);

return 0;
}
