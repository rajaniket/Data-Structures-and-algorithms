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
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        // 4 5 9       4 4 8 9 9
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        set<int> store_result;

        int i=0;
        int j=0;

        while(i<n1 && j<n2){

            if(nums1[i]==nums2[j]){
                store_result.insert(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else if(nums1[i]<nums2[j])
            {
                i++;
            }

        }
        vector<int> result(store_result.begin(),store_result.end());
       // if(result.size()>1){
       //     result.erase(result.begin()+1,result.end()-1);  // if problem is like this ==>   Input: nums1 = [4,9,5,8], nums2 = [9,4,9,8,4]  Output: [4,9] only intersection range 
       // }
        return result;
        }
};
int main(){
Solution Z;
vector<int> a={4,9,5,8};
vector<int> b={9,4,9,8,4};
vector<int> c=Z.intersection(a,b);
for(int i:c)
    cout<<i<<", ";

}

// method-2
/*
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
     set<int> keep_num1;
     vector<int> result;

     for(int i:nums1)
        keep_num1.insert(i);

     for(int j:nums2)
        if(keep_num1.count(j))
     {
         result.push_back(j);
         keep_num1.erase(j); // erasing that element from set so that in cannot repeat in the vector result

     }

        return result;
        }
};
*/
