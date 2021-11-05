#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;++i)
    {
        int j = i-1;
        int key = arr[i];
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;

        }
        arr[j+1] = key;
    }
}

int main() {
    int n = 5;
    int arr[]={5,4,3,2,1};
    insertionSort(arr,n);
    for(auto i: arr)
    {
        cout<<i<<" ";

    }
    return 0;
}