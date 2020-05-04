/*
Sanket has a string consisting of only 'a' and 'b' as the characters. Sanket describes perfectness of a string as the maximum length substring of equal characters. Sanket is given a number k which denotes the maximum number of characters he can change. Find the maximum perfectness he can generate by changing no more than k characters.

Input Format
The first line contains an integer denoting the value of K. The next line contains a string having only ‘a’ and ‘b’ as the characters.

Constraints
2 ≤ N ≤ 10^6

Output Format
A single integer denoting the maximum perfectness achievable.

Sample Input
2
abba
Sample Output
4
Explanation
We can swap the a's to b using the 2 swaps and obtain the string "bbbb". This would have all the b's and hence the answer 4.
Alternatively, we can also swap the b's to make "aaaa". The final answer remains the same for both cases.
*/

#include<iostream>
#include<string.h>
using namespace std;
int length(char *str, int k){
int max_length=0;
int n=strlen(str);
int freq[2]={0};
for(int i=0;i<n;i++){
if(str[i]=='a')
freq[0]++;
else freq[1]++;
}
char alp;
int s=min(freq[0],freq[1]);
if(freq[0]<=freq[1])
    alp='a';
else alp='b';
for(int i=0;i<n;i++)
{
int c=k;
if(str[i]==alp)
s--;
int j=i;
    while(c>=0&&j<n){
     if(str[j]==alp)
     c--;
     if(c<0)
     break;
     j++;
    }
max_length=max(max_length,(j-i));
if(s<k)
break;
}
return max_length;
}
int main(){
int k;
  	cin>>k;
char str[100];
cin>>str;
cout<<length(str,k);
}
