/*
Given a string s and a non-empty string p, find all the start indices of p's anagrams in s.

Strings consists of lowercase English letters only and the length of both strings s and p will not be larger than 20,100.

The order of output does not matter.

Example 1:

Input:
s: "cbaebabacd" p: "abc"

Output:
[0, 6]

Explanation:
The substring with start index = 0 is "cba", which is an anagram of "abc".
The substring with start index = 6 is "bac", which is an anagram of "abc".
Example 2:

Input:
s: "abab" p: "ab"

Output:
[0, 1, 2]

Explanation:
The substring with start index = 0 is "ab", which is an anagram of "ab".
The substring with start index = 1 is "ba", which is an anagram of "ab".
The substring with start index = 2 is "ab", which is an anagram of "ab".
*/


#include<algorithm>
#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>

using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
     unordered_map<char,int> table;
     for(char c:p){
        table[c]++;  //auto initialization with zero
     }
     int left=0,right=0; int Count=table.size(); int length=INT_MAX;
     int n=s.size();
     vector<int> ans;

     while(right<n)
     {
            if(table.find(s[right])!=table.end()){
                table[s[right]]--;
            if(table[s[right]]==0)
                Count--;
            }
            right++;

       while(Count==0)
        {

            if(p.length()==right-left)
            ans.push_back(left);
            if(table.find(s[left])!=table.end()){
            if(table[s[left]]==0)
                Count++;
            table[s[left]]++;
            }
            left++;
        }
        }
        return ans;
    }
};
int main(){
Solution u;
string a="cbaebabacd";
string b="abc";   //301  013
vector<int> k=u.findAnagrams(a,b);
for(auto i:k)
    cout<<i<<",";
}
