#include<iostream>
using namespace std;
int power(int base,int pow){
// base case
if(pow==0){
    return 1;
}
return (base*power(base,pow-1));
}
int main(){
int base;
int pow;
cin>>base>>pow;
cout<<power(base,pow)<<endl;
}
