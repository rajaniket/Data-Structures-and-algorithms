// Maximum Sum of sub-arrays using cumulative_sum
#include<iostream>
#include<string.h>
using namespace std;
int main(){
int arr[]={-4,1,3,-2,6,2,-8,-9,4};
int n=sizeof(arr)/sizeof(int);
cout<<"You Entered :" ;
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";}
cout<<endl;
int cumulative_sum[n]={0},max_sum=0,sum;
cumulative_sum[0]=arr[0];
cout<<"Cumulative Sum of Elements: ";
for(int i=1;i<=n;i++){
  cumulative_sum[i]=cumulative_sum[i-1]+arr[i];  //Pre computing sum
}
for(int i=0;i<n;i++){
cout<<cumulative_sum[i]<<" ";}
cout<<endl;
int left,right;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      sum=i>0?cumulative_sum[j]-cumulative_sum[i-1]:cumulative_sum[j];
        if(sum>max_sum){
        max_sum=sum;
        left=i; right=j;
        }
         sum=0;
    }
}
cout<<"maximum sum="<<max_sum<<endl;
for(int i=left;i<=right;i++)
    cout<<arr[i]<<",";
}
