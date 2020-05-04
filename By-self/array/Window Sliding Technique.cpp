/*
Window Sliding Technique

Input  : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}
         k = 4 
Output : 39

*/

/* 
*****************using Brute force O(n^2) ***************** 
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
*/

// *******************************using precomputing O(n), like subarray sum*************************************
/*
#include<algorithm>
#include<cstring>
using namespace std;
int max_win_sum(int *a,int k,int n){
int max_sum=0,current_sum=0,pre_sum[n]={0};
pre_sum[0]=a[0];
for(int i=1;i<n;i++){
    pre_sum[i]=pre_sum[i-1]+a[i];
}
max_sum=pre_sum[k-1];
for(int i=k;i<n;i++){
    current_sum=pre_sum[i]-pre_sum[i-k];
    max_sum=max(max_sum,current_sum);
}
return max_sum;
}

int main(){
int arr[]={1, 4, 2, 10, 23, 3, 1, 0, 20};
int n=sizeof(arr)/sizeof(int);
int k=3;
cout<<max_win_sum(arr,k,n)<<endl;
}
*/

//*******************************O(n)*************************************
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int max_win_sum(int *a,int k,int n){
int max_sum=0,current_sum=0;
for(int i=0;i<k;i++){
    current_sum+=a[i];
    max_sum=max(max_sum,current_sum);
}
for(int i=k;i<n;i++){
    current_sum+=a[i]-a[i-k];
    max_sum=max(max_sum,current_sum);
}
return max_sum;
}
int main(){
int arr[]={1, 4, 2, 10, 23, 3, 1, 0, 20};
int n=sizeof(arr)/sizeof(int);
int k=3;
cout<<max_win_sum(arr,k,n)<<endl;
}







