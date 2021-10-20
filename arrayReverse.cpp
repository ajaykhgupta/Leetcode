#include<bits/stdc++.h>
using namespace std;
// COOL CORRECT CODE
void reverseArray(int arr[],int n){
    int low = 0, high = n-1;
    while(low<=high)
    {
        swap(arr[low++], arr[high--]);
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }

    reverseArray(arr,n);

    for(int i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}