#include<iostream>
#include<stack>
using namespace std;
// iterative solution
void rev(int *a,int n)
{
  int left=0;
  int right=n-1;
  while(left<right){
    swap(a[left],a[right]);
    left++;
    right--;
  }
}

// recursive solution;
void rec_rev(int *arr,int left,int right){
if(left>=right)
    return;
swap(arr[left],arr[right]);
rec_rev(arr,left+1,right-1);
}

// using stack
void stac_rev(int *arr,int n){
stack<int> store;
for(int i=0;i<n;i++)
  store.push(arr[i]);
for(int i=0;i<n;i++){
  arr[i]=store.top();
  store.pop();
}
}

int main(){
int arr[]={1,2,4,4,6,7,8,9};
int n=sizeof(arr)/sizeof(int);
//rev(arr,n);
//rec_rev(arr,0,n-1);
stac_rev(arr,n);
for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}
}
