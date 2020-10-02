#include<iostream>
using namespace std;
int Search(int *arr,int Start,int End,int key){
int mid;
// base condition -1
if(Start>End)
    return -1;
else mid=(Start+End)/2;
// base condition-2
if(arr[mid]==key)
    return mid;
// recursive case
if(arr[mid]<key) // means search on right
Search(arr,mid+1,End,key);
else Search(arr,Start,mid-1,key);
}
int main(){
int n=7;
int arr[n]={1,2,3,4,8,10,11};
cout<<Search(arr,0,n-1,11);
}
