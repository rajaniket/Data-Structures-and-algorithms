/*

Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).

The replacement must be in-place and use only constant extra memory.

Here are some examples. Inputs are in the left-hand column and its corresponding outputs are in the right-hand column.

1,2,3 → 1,3,2
3,2,1 → 1,2,3
1,1,5 → 1,5,1

*/

// method-1
class Solution {
public:
   void nextPermutation(vector<int>& nums){
int n=nums.size();
int i;
for(i=n-2;i>=0;i--){
if(nums[i]<nums[i+1])  // 1234 4321
    break;
}
if(i<0)
{
    reverse(nums.begin(),nums.end());
    return;
}
sort(nums.begin()+i+1,nums.end());
for(int j=i+1;j<n;j++)
   if(nums[i]<nums[j]){
    swap(nums[i],nums[j]);
    return ;
   }
}
};

// method-2

/*
class Solution {
public:
void nextPermutation(vector<int>& nums){
int n=nums.size(),i;
for(i=n-2;i>=0;i--){
if(nums[i]<nums[i+1])  // 1234 4321
    break;
}
if(i<0)
{
    reverse(nums.begin(),nums.end());
    return;
}
reverse(nums.begin()+i+1,nums.end());  // sort(nums.begin()+i+1,nums.end());  // reverse or sort both will work
int k=upper_bound(nums.begin()+i+1,nums.end(),nums[i])-nums.begin();
swap(nums[i],nums[k]);
}
};

*/

