#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    rotate(arr,arr+5,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}


