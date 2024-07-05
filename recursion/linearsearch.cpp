#include<iostream>
using namespace std;
bool LinearS(int arr[], int key,int size){
       if (size==0)
       {
        return false;
       }

       if (arr[0]==key)
       {
        return true;
       }
       else {bool remaining = LinearS(arr+1,key,size-1);
       return remaining;}
       
       
};
int main() {
    int arr[5]={1,4,2,5,3};
    int key;
    cout<<"enter key : ";
    cin>>key;

   bool ans = LinearS(arr,key,5);
   
   if (ans)
   {
    cout<<"Key is present "<<endl;
   }
   else cout<<"absent"<<endl;
   





return 0;
}
