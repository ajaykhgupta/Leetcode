#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;++i)          // every time we swap the last element is sorted so we go on till the second last element
    {
        int min = i;
        for(int j= i+1; j < n;++j)
        {
            if(arr[j] < arr[min])
            {
                min = j;

            }
        }
        swap(arr[min], arr[i]);
    }
}

int main() {
    int n=9;
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    selectionSort(arr,n);
    
    for(int i: arr)
    {
        cout<<i<<" ";
    }
    return 0;
}