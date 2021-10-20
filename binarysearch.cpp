#include<bits/stdc++.h>
using namespace std;
// COOL CORRECT CODE
int binarySearch(int *arr, int n, int key)
{
    int low = 0 , high = n-1;
    while(low<=high)
    {
        int mid = low + (high - low)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }

    return -1;
    
}
int main() {
    int n, key;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ;++i)
    {
        cin>>arr[i];
    }

    cin>>key;
    cout<<binarySearch(arr,n,key);
    return 0;
}