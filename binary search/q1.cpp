// to find leftmost and rightmost place of an element in a sorted array
#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    int s =0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans;

    while (s<=e)
    {
        if (arr[mid]==key)
        {
            ans = mid;
            e = mid -1;
        }
        else if (arr[mid]<key)
        {
            s= mid+1;
        }
        else if (arr[mid]>key)
        {
            e = mid-1;
        }
        mid = s +(e-s)/2;
        
        
    }
    return ans;
    
}
int lastOcc(int arr[], int n, int key){
    int s =0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans;

    while (s<=e)
    {
        if (arr[mid]==key)
        {
            ans = mid;
            s= mid+1;
        }
        else if (arr[mid]<key)
        {
            s= mid+1;
        }
        else if (arr[mid]>key)
        {
            e = mid-1;
        }
        mid = s +(e-s)/2;
        
        
    }
    return ans;
    
}
int main() {
    int arr[7]={1,2,3,3,3,4,5};
    cout<<firstOcc(arr,7,3)<<endl;
    cout<<lastOcc(arr,7,3)<<endl;
    cout<<"total number of occurence = "<<(lastOcc(arr, 7,3)-firstOcc(arr,7,3))+1<<endl;

return 0;
}

