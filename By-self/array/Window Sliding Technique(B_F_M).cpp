/*
Window Sliding Technique (using Brute force)

Input  : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}
         k = 4 
Output : 39

*/

#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
int arr[]={1, 4, 2, 10, 23, 3, 1, 0, 20};
int n=sizeof(arr)/sizeof(int);
int k=4;
int max_sum=0,sum=0;
for(int i=0;i<=n-k;i++){

    for(int j=i;j<i+k;j++)
    {
       sum=sum+arr[j];
    }
     max_sum=max(max_sum,sum);
     sum=0;
}
cout<<max_sum<<endl;
}
