#include<iostream>
using namespace std;
int fact(int n){
if(n==0){      // base case
    return 1;
}
int small_ans=fact(n-1);// assume this will gonna give me all factorial value (all sub problem)
int ans=n*small_ans; //solution of current problem
return ans;
}
int main(){
int n;
cin>>n;
cout<<fact(n)<<endl;
}
