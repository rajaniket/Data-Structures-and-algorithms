/*

*/

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
bool palindrome(int *a,int n){
int left=0,right=n-1;
while(left<=right){
if(a[left]!=a[right]){
return false;
}
left++;
right--;
}
return true;
}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
if(palindrome(a,n))
cout<<"true";
else cout<<"false";
}
