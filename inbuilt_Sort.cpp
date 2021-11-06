#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b)
{
    return a > b;
}
int main() {
    int arr[]={10,9,8,6,5,4,3,2,11,16,8};
    int n = sizeof(arr)/sizeof(int);
    // first method to get decreasing order.
    sort(arr , arr+n);
    reverse(arr, arr+n);  //this will reverse the arr so that we get array in descending order

    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    // second method to get decreasing order
    sort(arr , arr+n, compare);

    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    // third method to get the dercreasing order
    sort(arr,arr+n, greater<int>());

    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}