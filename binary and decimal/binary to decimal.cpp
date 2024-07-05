#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int weight =1;
    int rem =0;
int ans=0;

    while (n!=0)
    {
        rem = n % 10;
       
        ans = ans + weight * rem;
         n = n / 10;
        weight = weight *2;

    }
    cout<<"the number is "<<ans;
    
return 0;
}
