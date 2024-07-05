#include<iostream>
using namespace std;
bool palin(string& str, int i , int j){
    if (i>j)
    {
        return  false ;
    }
    if (str[i]!=str[j])
    {
        return false;
    }
    else return palin(str , i+1 ,j-1);
    


};
int main() {
    string ha = "abbaabb";
    bool isPalin = palin (ha,0,ha.length()-1);
    if (isPalin)
    {
       cout<<"It is a palindrome";
    }
    else cout<<"Not a palindrome";

return 0;
}
