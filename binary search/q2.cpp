// peak index in mountain array ( mountain type array )
#include<iostream>
using namespace std;
int peakIndexMount(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    int ans;
    while (s<e)
    {
        if (arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
        
        

        
    }
    return s;
    
}
int main() {
    int arr[6]={1,2,3,4,2,1};
    cout<<peakIndexMount(arr,6)<<endl;

return 0;
}
