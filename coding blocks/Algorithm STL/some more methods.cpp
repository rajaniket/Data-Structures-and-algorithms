// some more methods 
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int a=5;
int b=10;
swap(a,b);
cout<<"a="<<a<<" b="<<b<<endl;
cout<<"Max="<<max(a,b)<<endl;
cout<<"Min="<<min(a,b)<<endl;
int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(int);
reverse(arr,arr+3);
for(int i:arr)
    cout<<i<<" ";
cout<<endl;

int arr1[]={1,2,3};
int n1=sizeof(arr)/sizeof(int);
next_permutation(arr1,arr1+n1);
for(int i:arr1)
    cout<<i<<" ";
cout<<endl;
}
