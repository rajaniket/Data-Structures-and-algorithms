#include<iostream>
using namespace std;
int mul(int a,int b){
// base case
  if(b==0)
    return 0;
// recursive case
 return a+mul(a,b-1);
}
int main(){
int a=100;
int b=20;
cout<<mul(a,b);
}
