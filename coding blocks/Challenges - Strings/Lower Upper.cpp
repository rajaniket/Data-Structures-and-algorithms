/*
Print "lowercase" if user enters a character between 'a-z' , Print "UPPERCASE" is character lies between 'A-Z' and print "Invalid" for all other characters like $,.^# etc.

Input Format
Single Character .

Constraints
-

Output Format
lowercase UPPERCASE Invalid

Sample Input
$
Sample Output
Invalid
Explanation
-
*/

#include<iostream>
#include<string.h>
using namespace std;
int main(){
char a;
cin>>a;
if(97<=a&&a<=122)
    cout<<"lowercase"<<endl;
else if(65<=a&&a<=90)
    cout<<"UPPERCASE"<<endl;
else cout<<"Invalid"<<endl;
}
