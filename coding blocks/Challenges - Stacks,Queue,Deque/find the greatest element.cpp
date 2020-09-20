#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    int k;
    cin>>k;
   arr[i]=k;
  }
  for(int left=0;left<n;left++){
       int right=(left+1)%n;
    while(left!=right){
        if(arr[left]<arr[right]){
          cout<<arr[right]<<" ";
          break;
        }
          right=(right+1)%n;
    }
    if(left==right)
        cout<<"-1 ";
  }
}
