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
void insert_diff(char *a){
int i=1,j=0;
signed char s[1000];
while(a[i]!='\0'){
s[j]=a[i-1];    // copying first word 
j++;
int k=(int)(a[i]-a[i-1]);
if(k>=0&&k<10)  // if k is +ve and less than 10 then only one space is required 
s[j]=k+'0';
else if(k<0&&k>-10){   // if k is -ve and greater than -10 then two space is required, one for '-' and 2nd for 'alphabet
's[j]='-';
j++;
s[j]=(-k)+'0';
}
if(k>=0&&k>=10){  // if k is +ve and greater than equal to 10 then two space is required ( e.g 25 --> 2,5)
s[j]=(k/10)+'0';
j++;
s[j]=(k%10)+'0';
}
else if(k<0&&k<=-10){  //if k is -ve and less than equal to 10 then three space is required ( e.g -25 --> -,2,5)
s[j]='-';
j++;
s[j]=(-k/10)+'0';
j++;
s[j]=(-k%10)+'0';
}
i++;
j++;
}
s[j]=a[i-1];
j++;
s[j]='\0';
cout<<s;
}
int main()
{
char a[100];
cin.getline(a,100);
insert_diff(a);
}

