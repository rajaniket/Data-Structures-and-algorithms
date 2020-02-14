//Print all substring
#include<iostream>
#include<cstring>
using namespace std;
int main(){
char arr[]="abcd";
int n=strlen(arr);
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        int h=j;
    for(int k=i;k>=0;k--){
    cout<<arr[h++];
        }
        cout<<endl;
    }

}}
