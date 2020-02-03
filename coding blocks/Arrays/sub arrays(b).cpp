// print all possible sub-arrays
//Method 2
#include<iostream>
using namespace std;
int main(){
int arr[4]={1,2,3,4};
int k;
int n=sizeof(arr)/sizeof(int);
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
               int p=j;
        for(int k=i;k>=0;k--){
            cout<<arr[p++];
    }cout<<endl;
    }}
}

