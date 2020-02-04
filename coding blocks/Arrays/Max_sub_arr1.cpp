//Maximum Subarray Sum 1
#include<iostream>
#include<string.h>
using namespace std;
int main(){
int arr[]={1,-2,3,-4};
int sum=0,max_sum=0;
int n=sizeof(arr)/sizeof(int);
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        for(int k=i;k<=j;k++){
        sum=sum+arr[k];
       // cout<<arr[k];
        }
       // cout<<sum;
        if(sum>max_sum){max_sum=sum;}
         sum=0;
    }
}
cout<<"maximum sum="<<max_sum;
}
