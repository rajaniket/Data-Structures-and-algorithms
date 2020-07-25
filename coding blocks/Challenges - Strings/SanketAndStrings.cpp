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

/* // Better solution  o(n) 
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    int ab_count[2]={0}; // it will store no of a and b 
    int current_length=0; // it will note maximum length 
    int i=0; // i-> left , j->right
    for(int j=0;j<s.length();j++){
    ab_count[s[j]-'a']++;  // counting a and b
    if(min(ab_count[0],ab_count[1])<=k) // if minimum from both count is < = k then current_length increases otherwise shift i to forward
     current_length++;
    else{
        ab_count[s[i]-'a']--;  // eliminating the count of i location for the sake of k
        i++;
    }
    }
    cout<<current_length<<endl;
}
*/

// m-2
#include<iostream>
#include<string.h>
#include<algorithm>    // 2 aabaabbbbbabba  //58aabbabaabaaababaaaaaaaaaaabaaaabaababaabbabbaaaabaaaaaaaaaaaaaabbbaaaaaaabbbbaaaaaaaaaaabaaaaaaaaaba

using namespace std;
int largest(string a,int k,char ch){
int i=0; // left pointer
int j=0; // right pointer
int ans=0,current_sum=0,c=0;  // c->count  it is storing the number of opposite character of ch (means a if ch=b)
for(j=0;j<a.length()-1 && c<k;j++){ //increasing right pointer until count become equal to k
    if(a[j]!=ch)
        c++;
    if(c==k)
    break;
}
// now applying two pointer approach
while(i<j){ 
    while(a[j+1]==ch&&j<a.length()-1){ // checking next element is equal to ch or not  
        j++;
    }
    current_sum=j-i+1;
    ans=max(ans,current_sum);

    if(a[i]!=ch && j<a.length()-1){  
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

