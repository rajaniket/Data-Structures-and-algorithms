/*
Example 1:

Input: [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Example 2:

Input: [-7,-3,2,3,11]
Output: [4,9,9,49,121]
 

Note:

1 <= A.length <= 10000
-10000 <= A[i] <= 10000
A is sorted in non-decreasing order.

*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int n=A.size();
        int left=0,right=n-1;
        int i=n-1;
        vector<int> result(n);
       while(left<=right){
           if(abs(A[left])>=abs(A[right]))
           {
               result[i--]=A[left]*A[left];
               left++;
           }
           else
           {
               result[i--]=A[right]*A[right];
               right--;
           }

       }
        return result;
    }
};
