#include<iostream>
using namespace std;
int findUnique(int arr[], int n){
    int ans =0;
    for (int i = 0; i < n; i++)
    {
        ans = ans^arr[i];
    }
    for(int i =1;i<n;i++)
    { ans= ans^i;}
    
    return ans;
    
}
int main() {
    int arr[7]= {1,7,9,3,4,1,9};

    cout<<findUnique(arr,7);

return 0;
}
