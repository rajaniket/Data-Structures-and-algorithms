//
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int arr[]={5,40,28,11,33};
int n=sizeof(arr)/sizeof(int);
int key=11;
auto adrs=find(arr,arr+n,key);
int index=adrs-arr;
if(index==n)
    cout<<"Number Not Found"<<endl;
else cout<<"Number present at index "<<index<<endl;
}
