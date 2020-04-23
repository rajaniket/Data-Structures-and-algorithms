/*
Take as input S, a string. Write a program that inserts between each pair of characters the difference between their ascii codes and print the ans.

Input Format
String

Constraints
Length of String should be between 2 to 1000.

Output Format
String

Sample Input
acb
Sample Output
a2c-1b
Explanation
For the sample case, the Ascii code of a=97 and c=99 ,the difference between c and a is 2.Similarly ,the Ascii code of b=98 and c=99 and their difference is -1. So the ans is a2c-1b.
*/

#include<iostream>
#include<string.h>
using namespace std;
void insert_diff(string a){
int i=1;
signed char k[2*a.length()];
k[0]=a[0];
int j=1;
while(a[i]!='\0'){
if((int)(a[i]-a[i-1])>=0)
k[j]=(a[i]-a[i-1]+'0');
else
{
k[j]='-';
j++;
k[j]=(a[i-1]-a[i]+'0');
}
j++;
k[j]=a[i];
j++;
i++;
}
k[j]='\0';
cout<<k;
}
int main(){
string a;
cin>>a;
insert_diff(a);
}
