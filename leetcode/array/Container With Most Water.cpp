/*
Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.

Note: You may not slant the container and n is at least 2.

The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
 
Example:

Input: [1,8,6,2,5,4,8,3,7]
Output: 49

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
        while(i<height.size())
      {
        while(i<j)
          {
        int calculate=(j-i)*min(height[i],height[j]);
        Max=max(Max,calculate);
        j--;
          }
        i++; // shifting i after inner while loop operation
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
            if(height[i]>=height[j]) // container size decreases on moving so ,will shift those elment which is smaller comparatively
                j--;
            else i++;
        }
        return Max;
    }
};

*/

// ********************method-3***************************
class Solution {
public:
    int maxArea(vector<int>& height) {
      int Max=0;
        int i=0,j=height.size()-1;
        while(i<j){
            int h=min(height[i],height[j]);
            Max=max(Max,(j-i)*h);
            while(height[i]<=h && i<j){i++;}  // as container size decreases it start depending upon hight so if height is less than container size then skip that element or height
            while(height[j]<=h && i<j){j--;}
        }
        return Max;
    }
};


int main(){
vector<int> A={1,8,6,2,5,4,8,3,7};
Solution k;
cout<<k.maxArea(A);
}

