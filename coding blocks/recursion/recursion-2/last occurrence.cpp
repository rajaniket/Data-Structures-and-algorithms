#include<iostream>
using namespace std;
int last_occurrence(int *arr,int n,int key){
if(n==0)
return -1;
int i=last_occurrence(arr+1,n-1,key);
if(i==-1){
if(arr[0]==key)
return 0;
else return -1;
}
return i+1; // means for i>=0 situation
}

int main(){
int n=9;
int arr[]={1,2,3,7,4,5,7,9,10};
cout<<last_occurrence(arr,n,7);
}
