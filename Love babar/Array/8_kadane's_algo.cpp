#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n){

    int max_sum=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        max_sum=max(max_sum,sum);
        if(sum<0)
        sum=0;
    }

    return max_sum;
}
int main()
{
    int arr[]={-6,-7,3,-4,-1};
    int n=5;
    cout<<maxSubarraySum(arr,n);
}
