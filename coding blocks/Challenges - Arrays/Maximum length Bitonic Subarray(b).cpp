/*
You are provided n numbers of array. You need to find the maximum length of bitonic subarray. A subarray A[i … j] is biotonic if there is a k with i <= k <= j such that A[i] <= A[i + 1] … <= A[k] >= A[k + 1] >= .. A[j – 1] > = A[j] i.e subarray is first increasing and then decreasing or entirely increasing or decreasing.

Input Format
First line contains integer t which is number of test case. For each test case, it contains an integer n which is the size of array and next line contains n space separated integers.

Constraints
1<=t<=100 1<=n<=1000000

Output Format
Print the maximum length.

Sample Input
2
6
12 4 78 90 45 23
4
40 30 20 10
Sample Output
5
4
Explanation
ForMaximum length = 4, 78, 90, 45, 23
*/

#include<iostream>
using namespace std;
int length(int *a,int n){
int id=0,Max=0;
for(int i=0;i<n;i++){
   int j=i,inc=0,dec=0;
while(j>=1){
if(a[j]>=a[j-1]){
inc++;
j--;
}
else break;
}
j=i;
while(j<n-1){
if(a[j]>=a[j+1]){
dec++;
j++;
}
else break;
}
int len=dec+inc+1;
Max=max(Max,len);
}
return Max;
}
int main() {
    int c;
    cin>>c;
    while(c>0){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<length(a,n)<<endl;
	c--;
	}

	}
