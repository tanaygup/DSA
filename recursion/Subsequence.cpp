#include<iostream>
#include<vector>
using namespace std;

void subsequence(int arr[],vector<int> &v, int ind, int n){
    //    base case for recursion
    if (ind==n)
       {
        for (auto it: v)
        {
            cout<<it<<" ";
        }
        if(v.size()==0){
            cout<<"{}"<<endl;
        }
        cout<<endl;
        return;
    }
 
 v.push_back(arr[ind]);
 subsequence(arr,v,ind+1,n);
 v.pop_back();
  
 subsequence(arr,v,ind+1,n);
       
};
int main() {
    int arr[]={3,4,5,6};
    int n = 4;
    vector<int> v;
    subsequence(arr,v,0,4);
return 0;
}
