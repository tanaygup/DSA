// used only in monotonous functions
#include<iostream>
using namespace std;
int BinarySearch(int array[], int size , int key){
    int start = 0;
    int end = size -1;
    int mid = ( start + end ) / 2;
    while (start <= end)
    {
        if (array[mid] == key)
        {
            return mid;
        }
        if (key > array[mid])
        {
           start = mid + 1;
        }
        else {end = mid -1;}
        mid = (start + end)/2;

        
    }
    return -1;
    
}
int main() {
    int even[6]= {1,2,3,5,6,8};
    int odd[5]= {4,6,7,8,9};

    int evenIndex = BinarySearch(even , 6 , 8);

    cout<< " The index of 8 is "<<evenIndex<<endl;

    int oddIndex= BinarySearch(odd,5,6);

    cout<<"The index of 6 is "<<oddIndex<<endl;


return 0;
}
