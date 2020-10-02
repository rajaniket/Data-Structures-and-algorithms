#include<iostream>
using namespace std;
int linear_search(int *arr,int n,int key){
// base case
if(n==0)
return -1;
if(arr[0]==key)
 return 0;
int i=linear_search(arr+1,n-1,key);
if(i==-1)
 return -1;
else
    return i+1;
}
int main(){
int n=9;
int *arr={5,6,5,4,3,2,9,0,1};
cout<<linear_search(arr,n,key);
}
