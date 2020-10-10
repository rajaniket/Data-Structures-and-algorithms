#include<iostream>
#include<vector>
using namespace std;
int fast_pow(int a, int b){
if(b==0){
    return 1;
}
int smaller_ans=fast_pow(a,b/2);
smaller_ans*=smaller_ans; // squaring 
if(b & 1)   //if it is odd
    return a*smaller_ans;
else return smaller_ans;
}
int main(){
cout<<fast_pow(2,9);
}
