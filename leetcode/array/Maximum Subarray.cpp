/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:

Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Follow up:
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int current_max=INT_MIN,current_sum=0;
        for(int i=0;i<nums.size();i++) {
            current_sum+=nums[i];
             current_max=max(current_max,current_sum);
            if(current_sum<0)
            current_sum=0;
        }  
        return current_max;
    }
};