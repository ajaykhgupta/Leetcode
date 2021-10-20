#include<bits/stdc++.h>
using namespace std;


int printingSubarray1(int arr[],int n)
// kadane's algorithm max subarray sum brute force O(n^3)
 
{   
    int maxsum = 0;
    for(int i=0 ; i<n ; ++i)
    {
        for(int j=i ; j<n; ++j)
        {   
            int sum = 0;
           for(int k=i ; k <=j; ++k)
           {    
               sum += arr[k];
           }

          maxsum = max(sum,maxsum);
        }
    }
    return maxsum;
}

int printingSubarray2(int arr[],int n)
// kadane's algorithm max subarray sum better approach O(n^2) and space  = O(n)
{   
    int prefix_sum[n] = {0};
    prefix_sum[0] = arr[0];
    for(int i=1;i<n;++i)
    {
        prefix_sum[i] = prefix_sum[i-1] + arr[i];
    }
    int maxsum = 0;
    for(int i=0 ; i<n ; ++i)
    {
        for(int j=i ; j<n; ++j)
        {   
            int sum = i > 0 ? prefix_sum[j] - prefix_sum[i-1] : prefix_sum[j]; 
            maxsum = max(maxsum,sum);
        }
    }
    return maxsum;
}


int printingSubarray3(int arr[],int n)
// kadane's Algorithm tn = O(n)  space = O(1)
 
{   
    int sum = 0,maxsum = INT_MIN;
        for(int i = 0 ; i < n; ++i){
            sum = sum + arr[i];
            maxsum = max(sum , maxsum);
            
            if(sum < 0)
            {
                sum = 0;
            }
            
        }
        return maxsum;
}



int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    cout<<printingSubarray1(arr,n)<<endl;
    cout<<printingSubarray2(arr,n)<<endl;
    cout<<printingSubarray3(arr,n)<<endl;
    return 0;
}