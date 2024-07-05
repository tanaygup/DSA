/* Input: array = [2,3,6,7], target = 7

Output: [[2,2,3],[7]]
*/

#include<iostream>
#include<vector>
#include<set>
using namespace std;
void CombSum(int ind, int s, int target, int arr[], vector<int> &v,int n){
    // base case 
    
    if(s==target){
        for(auto it: v){
            cout<<it<<" ";
        } cout<<endl;
    } 
    if(s>target || ind>=n){
        return;
    }
    

    v.push_back(arr[ind]);
    s+= arr[ind];

    CombSum(ind,s,target,arr,v,n);
    
    v.pop_back();
    s-=arr[ind];

    CombSum(ind+1,s,target,arr,v,n);

}
int main() {
    int arr[]={2,3,6,7};
    int target = 7;
    int n = 4;
    vector<int> v;
    CombSum(0,0,7,arr,v,4);
return 0;
}