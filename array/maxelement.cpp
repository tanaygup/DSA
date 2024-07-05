#include <iostream>
using namespace std;
int MaxNum(int arr[], int n)
{
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int size;
    cin >> size;

    int number[100];
    for (int j = 0; j < size; j++)
    {
        cin>>number[j];
    }
    
    cout<<MaxNum(number, size);

    return 0;
}
