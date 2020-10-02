#include<iostream>
using namespace std;
void f_dec(int n){
// base case
if(n==0)
    return;
cout<<n;
f_dec(n-1);
}

void f_inc(int n){
if(n==0)
  return;
f_inc(n-1);
cout<<n;
}

int main(){
int n;
cin>>n;
f_inc(n);
cout<<endl;
f_dec(n);
}
