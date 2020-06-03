/*
Given an array Arr[], Treat each element of the array as the digit and whole array as the number. Implement the next permutation, which rearranges numbers into the numerically next greater permutation of numbers.

If such arrangement is not possible, it must be rearranged as the lowest possible order ie, sorted in an ascending order.

Note: The replacement must be in-place, do not allocate extra memory.

Input Format
The First Line contains the Number of test cases T.
Next Line contains an Integer N, number of digits of the number.
Next Line contains N-space separated integers which are elements of the array 'Arr'.

Constraints
1 <= T <= 100
1 <= N <= 1000
0 <= Ai <= 9

Output Format
Print the Next Permutation for each number separated by a new Line.

Sample Input
2
3
1 2 3 
3
3 2 1

Sample Output
1 3 2
1 2 3

Explanation
Possible permutations for {1,2,3} are {1,2,3} , {1,3,2} , {2,1,3} , {2,3,1}, {3,1,2} and {3,2,1}. {1,3,2} is the immediate next permutation after {1,2,3}.
For the second testcase , {3,2,1} is the last configuration so we print the first permutation as its next permutation.
*/
#include<iostream>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int>& nums){
int n=nums.size();
int i;
for(i=n-2;i>=0;i--){
if(nums[i]<nums[i+1])  // in reverse order, find the first number which is in increasing trend (violated number)
    break;
}
if(i<0)   // if it already the greatest number( if no violation) then i must be -ve , we will reverse that number in order to make it lowest
{
    reverse(nums.begin(),nums.end());
    return;
}
// now we will sort the right portion from violeted number 
sort(nums.begin()+i+1,nums.end());   // reverse(nums.begin()+i+1,nums.end()); it can also be use at the place of sort
for(int j=i+1;j<n;j++){
   if(nums[i]<nums[j]){     
    swap(nums[i],nums[j]);   // swap the violetd number to next greater number 
    return ;}
}
}
int main()
{
     vector<int> arr2={3,2,1};
   for(int i=0;i<24;i++){
    nextPermutation(arr2);
    for(int i:arr2)
        cout<<i;
    cout<<endl;
   }
}

