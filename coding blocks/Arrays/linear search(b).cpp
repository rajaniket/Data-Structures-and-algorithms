// Linear search method-2
#include<iostream>
using namespace std;
int main(){
int arr[10]={5,22,2,6,3,77,7,4,9};
int k,i=0;
int n=sizeof(arr)/sizeof(int);
cout<<"Enter number to be search"<<endl;
cin>>k;
for(i=0;i<n;i++){

    if(arr[i]==k){
            cout<<k<<" is present in the array at location "<<i+1<<endl;
    break;
    }
}
if(i==n){ cout<<k<<" is Not present in the array"<<endl;}

}
