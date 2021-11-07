#include<bits/stdc++.h>
using namespace std;

void Swap(int &a,int &b)
{
    int temp = a;
    a = b ;
    b = temp;
}
void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n-i-1;++j)
        {
            if(arr[j] > arr[j+1])
            {
                Swap(arr[j], arr[j+1]);
            }
        }
    }

}

int main() {
    int n = 5;
    int arr[] = {5,4,3,2,1};
    bubbleSort(arr,n);
    for(int i:arr)
    {
        cout<<i<<" ";

    }
    return 0;
}