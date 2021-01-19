// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1#

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void Rotate(int arr[], int n)
{
 int temp=arr[n-1];

 for(int i=n-2;i>=0;i--)
 {
     arr[i+1]=arr[i];
 }
 arr[0]=temp;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    Rotate(arr,n);
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
}
