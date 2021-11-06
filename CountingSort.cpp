#include<bits/stdc++.h>
using namespace std;

void countingSort(int arr[],int n)
{
    // first get the max element to get the range
    int max_ele = INT_MIN;
    for(int i=0;i<n;++i)
    {
        max_ele = max(max_ele, arr[i]);
    }
    int freq[max_ele + 1]={0};              // we can even use vector here
    for(int i=0; i<n; ++i)                  // here we can't use for each loop because in inside the function  arr is pointer.
    {
        freq[arr[i]]++;
    }

    //  Put back the elements from freq into original array
    int j=0;
    for(int i=0;i<=max_ele;++i)
    {
        while(freq[i]>0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }


}
int main() {
    int arr[] = {88,97,10,12,15,1,5,6,12,5,8};
    int n = sizeof(arr)/sizeof(int);
    countingSort(arr,n);

    for(int x: arr)
    {
        cout<<x<<" ";
    }
    return 0;
}