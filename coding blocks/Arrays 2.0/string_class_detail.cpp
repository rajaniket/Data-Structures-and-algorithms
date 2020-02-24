// String class
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
string arr[]={"potato","zebra","banana","apple","mango","radish","sweet_potato"};
int p=sizeof(arr)/sizeof(string);
cout<<"Number of String: "<<p<<endl;
//string arr1[5];
//int n;
//cin>>n;
//cin.ignore();
//for(int i=0;i<n;i++)
//    getline(cin,arr1[i]);
//for(int i=0;i<n;i++)
// cout<<arr1[i]<<endl;
string k;
cout<<"Enter element to search "<<endl;
getline(cin,k);
int i;
for(i=0;i<p;i++){
    if(k==arr[i]){
        cout<<k<<" is found at index "<<i<<endl;
     break;
    }

}
if(i==p)
    cout<<"Not found"<<endl;

}


