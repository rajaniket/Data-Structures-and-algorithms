#include<iostream>
#include<string.h>
using namespace std;
int main(){
int arr[]={1,2,3,-4};
int n=sizeof(arr)/sizeof(int);
int cum_sum[n]={0},max_sum=0;
cum_sum[0]=0;
for(int i=1;i<=n;i++){
  cum_sum[i]=cum_sum[i]+arr[i-1];
}
for(int i=0;i<=n;i++)
cout<<cum_sum[i]<<endl;
//int left,right;
//for(int i=0;i<n;i++){
//    for(int j=i;j<n;j++){
//        for(int k=i;k<=j;k++){
//        sum=sum+arr[k];
//       // cout<<arr[k];
//        }
//       // cout<<sum;
//        if(sum>max_sum){
//        max_sum=sum;
//        left=i; right=j;
//        }
//         sum=0;
//    }
//}
//cout<<"maximum sum="<<max_sum<<endl;
//for(int i=left;i<=right;i++)
//    cout<<arr[i]<<",";
}
