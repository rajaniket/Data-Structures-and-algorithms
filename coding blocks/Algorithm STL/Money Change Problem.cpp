// Indian Money Change 

#include<algorithm>
#include<iostream>
using namespace std;
bool compare(int a,int b){ // b is element of array and a is money , when money b become greater than 'a' it will return true.
return a<=b;
}
int main(){
    int coins[]={1,2,5,10,20,50,100,200,500,2000};
    int n=sizeof(coins)/sizeof(int);
    int money=35;
    while(money!=0){
   //int ub=upper_bound(coins,coins+n,money)-coins-1; // it will also work
    int lb=lower_bound(coins,coins+n,money,compare)-coins-1;// as it always return greater so subtracting 1
    cout<<coins[lb]<<endl;
    money=money-coins[lb];
    }

}


