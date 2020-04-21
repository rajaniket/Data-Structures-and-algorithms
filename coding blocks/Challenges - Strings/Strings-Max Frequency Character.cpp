/*
Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.

Input Format
String

Constraints
A string of length between 1 to 1000.

Output Format
Character

Sample Input
aaabacb
Sample Output
a
Explanation
For the given input string, a appear 4 times. Hence, it is the most frequent character.

*/

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
char max_freq(string a){
int arr[30]={0};
int i=0;
while(a[i]!='\0'){
arr[a[i]-'a']++;
i++;
}
int m=0;
for(i=0;i<26;i++){
m=max(m,arr[i]);
}
for(i=0;i<26;i++){
if(arr[i]==m)
    break;
}
return (i+'a');
}
int main(){
string a;
cin>>a;
cout<<max_freq(a);
}
