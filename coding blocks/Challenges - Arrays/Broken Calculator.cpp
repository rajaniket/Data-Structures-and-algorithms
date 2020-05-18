/*
Andrew was attempting a mathematics test where he needed to solve problems with factorials. One such problem had an answer which equaled 100! ,He wondered what would this number look like. He tried to calculate 100! On his scientific calculator but failed to get a correct answer. Can you write a code to help Andrew calculate factorials of such large numbers?

Input Format
a single lined integer N

Constraints
1 < = N < = 500

Output Format
Print the factorial of N

Sample Input
5
Sample Output
120
Explanation
for factorial of 5 we have 5 x 4 x 3 x 2 x 1 = 120
*/
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
#define MAX 500
int multiply(int n,int *a,int Count){
int k,carry=0;
for(int i=0;i<Count;i++){
    k=(a[i]*n)+carry;
    a[i]=k%10;
    carry=k/10;
}

while(carry){
a[Count]=carry%10;
carry=carry/10;
Count++;
}
return Count;
}

void fact(int n){
int a[MAX];
a[0]=1;
int Count=1;
for(int i=2;i<=n;i++){
Count=multiply(i,a,Count);
}
for(int i=Count-1;i>=0;i--)
cout<<a[i];
}

int main(){
int n;
cin>>n;
fact(n);
}
