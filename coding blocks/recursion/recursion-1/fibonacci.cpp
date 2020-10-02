#include<iostream>
using namespace std;
int fab(int n){
// base case
if(n==1 or n==0){
    return n;
}

// recursive case
int f1=fab(n-1);   // calculating sub answers
int f2=fab(n-2);  //         "
return f1+f2;
}
int main(){
int n;
cin>>n;
cout<<fab(n)<<endl;
}
