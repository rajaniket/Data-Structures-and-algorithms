/*
Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

Example 1:

Input: [3,0,1]
Output: 2
Example 2:

Input: [9,6,4,2,3,5,7,0,1]
Output: 8
*/

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// ************************ Method-1 ********************************

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());  // sorting the vector first then comparing it with index , if doesn't matched means that number is missing.
        int i;
        for(i=0;i<nums.size();i++)
            if(nums[i]!=i){
                return i;
            }
    }
};
// ************************ Method-2 ********************************
/*
class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n=nums.size();
       vector<int> store(n+1,0);  // n+1 because one number is missing so total number is n+1 (for pre computing we have to consider all)
        for(int i=0;i<n;i++)
            store[nums[i]]++;   // increamenting those index content which  is persent in nums , the index content with zero will be that missing number 
        int j=0;
        for(j=0;j<n;j++){
        if(store[j]!=1)
            break;
        }
        return j;
    }
};
*/
// ************************ Method-3 (MATH) ********************************
/*
class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n=nums.size();
      int sum=accumulate(nums.begin(),nums.end(),0);
        return (n*(n+1)/2)-sum;  // sum of n number - sum of elements 
    }
};
*/
int main(){
Solution A;
vector<int> x={9,6,4,2,3,8,7,0,1};
cout<<A.missingNumber(x);
}
