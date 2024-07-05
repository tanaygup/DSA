#include<iostream>
using namespace std;
// for 1D array int* arr = new int [n]
int main() {
    int m  ; //m = number of rows, n= columns
    cin>>m;
    int n;
    cin>>n;

    int**p = new int*[m];
    for (int i = 0; i < m; i++)
    {
        p[i]=new int[n];
        /* code */
    }
    // creation of 2d array

    // taking input
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>p[i][j];
            /* code */
        }
        
    }

    // taking output
    cout<<endl;
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<p[i][j]<<"  ";
            /* code */
        }cout<<endl;
        
    }
    // releasing memory
    for (int i = 0; i < m; i++)
    {
        delete [] p[i];
    }
    delete []p;
    
    
return 0;
}
