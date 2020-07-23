/*
Given three sorted arrays A, B and Cof not necessarily same sizes.

Calculate the minimum absolute difference between the maximum and minimum number from the triplet a, b, c such that a, b, c belongs arrays A, B, C respectively.
i.e. minimize | max(a,b,c) - min(a,b,c) |.

Example :

Input:

A : [ 1, 4, 5, 8, 10 ]
B : [ 6, 9, 15 ]
C : [ 2, 3, 6, 6 ]
Output:

1
Explanation: We get the minimum difference for a=5, b=6, c=6 as | max(a,b,c) - min(a,b,c) | = |6-5| = 1.
*/
int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
int Min_diff=INT_MAX;
        int n1=A.size();
        int n2=B.size();
        int n3=C.size();
        int i=n1-1;
        int j=n2-1;
        int k=n3-1;
        while(i>=0 && j>=0 && k>=0)
        {
           int diff=max(max(A[i],B[j]),C[k])-min(min(A[i],B[j]),C[k]);
           //cout<<diff<<endl;
           Min_diff=min(Min_diff,diff);
           if(A[i]>=B[j] && A[i]>=C[k])
           i--;
           else if(B[j]>=A[i] && B[j]>=C[k])
            j--;
           else k--;

        }
        return Min_diff;
    }

