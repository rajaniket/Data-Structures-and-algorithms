/*
Given two arrays, write a function to compute their intersection.
Example 1:
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4] or [4,9]
Note:
Input: nums1 = [4,9,5,8], nums2 = [9,4,9,8,4]
Output: [4,8,9]
Note:
Each element in the result must be unique.
The result can be in any order.
*/

#include<iostream>
#include<string.h>
#include"algorithm"
#include"vector"
#include"set"
using namespace std;
// *********************** Brute force ***********************
/*
class Solution {
public:
    int maxArea(vector<int>& height) {
      int Max=0;
        int i=0,j=height.size()-1;
        while(i<height.size()){
        while(i<j){
            int calculate=(j-i)*min(height[i],height[j]);
        Max=max(Max,calculate);
        j--;
        }
        i++;
        j=height.size()-1;
        }
        return Max;
    }
};
*/

//*********************Method-2*******************
/*
class Solution {
public:
    int maxArea(vector<int>& height) {
      int Max=0;
        int i=0,j=height.size()-1;
        while(i<j){
            int h=min(height[i],height[j]);
            int calculate=(j-i)*h;
            Max=max(Max,calculate);
            if(height[i]>=height[j])
                j--;
            else i++;
        }
        return Max;
    }
};

*/

// ********************method-3***************************

int main(){
vector<int> A={1,8,6,2,5,4,8,3,7};
Solution k;
cout<<k.maxArea(A);
}

