#include<iostream>
using namespace std;
// si= start index
int sum(int a[],int size, int si=0 // this is called default arg. if you are 
//giving si then good, otherwise I will assume from 0 
){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        /* code */
        ans+=a[i];
    }
    return ans;
}
// default value should start from rightmost value.
int main() {
    int a[9];
    // write input code
    cout<<sum(a,20)<<endl;

return 0;
}
