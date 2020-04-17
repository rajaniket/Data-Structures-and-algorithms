/*
Given an n x m matrix, where every row and column is sorted in increasing order, and a number x . Find if element x is present in the matrix or not.

Input Format
First line consists of two space separated integers N and M, denoting the number of element in a row and column respectively. Second line of each test case consists of N*M space separated integers denoting the elements in the matrix in row major order. Third line of each test case contains a single integer x, the element to be searched.

Constraints
1 <= N,M <= 30 0 <= A[i] <= 100

Output Format
Print 1 if the element is present in the matrix, else 0.

Sample Input
3 3
3 30 38
44 52 54
57 60 69
62
Sample Output
0
Explanation
Search the element in the sorted matrix. If the element is present print 1 otherwise print 0. In the sample input,in first case 62 is not present in the matrix so 0 is printed. Similarly, for second case 55 is present in the matrix so 1 is printed.
*/

#include<iostream>
#include<string.h>
using namespace std;
bool srch(int key,int a[][10],int m,int n) {
    int i=n-1;
    int j=0;
while(j<m&&i>=0){
   if(a[j][i]==key) {
    return 1;
   }
 else if(a[j][i]>key)
    i--;
 else if(a[j][i]<key)
    j++;
}
return 0;
}
int main(){
int m,n;
cin>>m>>n;
int a[m][10];
for(int i=0;i<m;i++)
    for(int j=0; j<n;j++)
    cin>>a[i][j];
int key;
cin>>key;
cout<<srch(key,a,m,n);
}
