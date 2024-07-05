#include<iostream>
using namespace std;
void merge(int arr[], int s, int e){
    int mid = s+ (e-s)/2;
    
    int len1 = mid - s + 1;
    int len2 = e -mid;
    int *first = new int[len1];
    int *second = new int[len2];

    int k =s;
    for (int i = 0; i < len1; i++)
    {
        first[i]=arr[k++];
    }

    int j = mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i]=arr[j++];
    }

    // merge 2 sorted arrays
    int index1=0 , index2 = 0;
    int l = s;
    while (index1<len1 && index2 < len2)
    {
        if (first[index1]<second[index2])
        {
            arr[l]=first[index1];
            l++;
            index1++;
        }
        else{
             arr[l++]=second[index2++];
        }
        
    }
    while (index1<len1)
    {
        arr[l++]=first[index1++];
    }
    
      while (index2<len2)
    {
        arr[l++]=second[index2++];
    }
    
    delete []first;
    delete []second;
    
};
void mergeSort(int arr[], int s , int e){
    int mid = s+(e-s)/2;

    if (s>=e)
    {
        return ;
    }
    
    // left side 
    mergeSort(arr,s,mid);

    // right side
    mergeSort(arr , mid + 1, e);

    // merging both arrays
    merge(arr,s,e);
};
int main() {
    int arr[5]={0,3,2,5,1};
    int n=5;
    mergeSort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    

return 0;
}
