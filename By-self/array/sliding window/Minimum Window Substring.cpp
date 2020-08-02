/*
Given a string S and a string T, find the minimum window in S which will contain all the characters in T in complexity O(n).

Example:

Input: S = "ADOBECODEBANC", T = "ABC"
Output: "BANC"
Note:

If there is no such window in S that covers all characters in T, return the empty string "".
If there is such window, you are guaranteed that there will always be only one unique minimum window in S.
*/


#include<algorithm>
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
     unordered_map<char,int> table;
     for(char c:t){
        table[c]++;  //auto initialization with zero
     }
     int left=0,right=0; int Count=table.size(); int length=INT_MAX;
     int n=s.size();
     string ans=" ";

     while(right<n)
     {
            if(table.find(s[right])!=table.end()){
                table[s[right]]--;
            if(table[s[right]]==0)
                Count--;
            }
            cout<<right<<" "<<left<<" "<<Count<<endl;
            right++;

       while(Count==0)
        {
            //
            if(length>right-left){
            length=right-left;
            ans=s.substr(left,right-left);
            }
            if(table.find(s[left])!=table.end()){
            if(table[s[left]]==0)
                Count++;
            table[s[left]]++;
            }
            cout<<right<<" "<<left<<" "<<Count<<endl;
            left++;
        }
        }
        cout<<"length: "<<length<<endl;
        return ans;
    }
};
int main(){
Solution u;
string a="ADOBECODEBANC";
string b="ABC";   //301  013
cout<<"right"<<" "<<"left"<<" "<<"Count"<<endl;
cout<<"minimum window: "<<u.minWindow(a,b);
}
