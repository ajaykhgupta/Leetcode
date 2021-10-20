#include<bits/stdc++.h>
using namespace std;

void printingPairs(int arr[], int n)
{
    for(int i=0;i<n;++i)
    {
        for(int j=i+1; j<n;++j)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
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
    printingPairs(arr,n);
    return 0;
}