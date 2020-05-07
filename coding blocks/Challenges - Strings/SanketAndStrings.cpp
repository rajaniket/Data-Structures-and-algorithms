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
#include<algorithm>    // 2 aabaabbbbbaaa
using namespace std;
int largest(string a,int k,char ch){
int i=0;
int j=0;
int ans=0,current_sum=0,c=0;
for(j=0;j<a.length()&&c<k;j++){
    if(a[j]!=ch)
        c++;
    if(ch==k)
    break;
}
while(i<j){
    while(a[j+1]==ch&&j<a.length()-1){
        j++;
    }
    current_sum=j-i+1;
    ans=max(ans,current_sum);
    if(a[i-1]!=ch && j<a.length()-1){
    j++;
    }
     i++;

}
return ans;
}
int main()
{
string a;
int k;
cin>>k;
cin>>a;
int q1,q2;
q1=largest(a,k,'b');
q2=largest(a,k,'a');
int Max=max(q1,q2);
cout<<Max;
}

