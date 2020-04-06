/* You are provided n numbers of array. You need to find the maximum length of bitonic subarray. A subarray A[i … j] is biotonic if there is a k with i <= k <= j such that A[i] <= A[i + 1] … <= A[k] >= A[k + 1] >= .. A[j – 1] > = A[j] i.e subarray is first increasing and then decreasing or entirely increasing or decreasing.

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
int Max=1,inc[n],dec[n]; // inc means increament , dec means decreament 
inc[0]=1;
for(int i=1;i<n;i++){
    inc[i]=1;
  if(a[i-1]<=a[i]){
     Max++;
    inc[i]=Max;
  }
  else Max=1;
}
dec[n-1]=1;
Max=1;
for(int i=n-2;i>=0;i--){
    dec[i]=1;
   if(a[i+1]<=a[i]){
    Max++;
    dec[i]=Max;
  }
  else Max=1;
}
Max=inc[0]+dec[0]-1;
for(int i=1;i<n;i++){
   Max=max((inc[i]+dec[i]-1),Max);
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
	}}
