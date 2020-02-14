//Print all substring of a string
#include<iostream>
#include<cstring>
using namespace std;
int main(){
char arr[]="abcd";
int n=strlen(arr);
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        for(int k=i;k<=j;k++){
            cout<<arr[k];
        }
        cout<<endl;
    }

}}
