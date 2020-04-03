/*
Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.

Given n non negative integers representing the elevation map where width of every bar is 1, Find the maximum water that she can save.

Explanation for the Sample input Testcase:
Elevation Map

So the total units of water she can save is 5 units

Input Format
First line contains an integer n. Second line contains n space separated integers representing the elevation map.

Constraints
1 <= N <= 10^6

Output Format
Print a single integer containing the maximum unit of waters she can save.

Sample Input
10
0 2 1 3 0 1 2 1 2 1
Sample Output
5
Explanation
Refer to the image for explanation. Count the number of cells having water in them.
*/
#include<iostream>
#include<algorithm>
using namespace std;
void rain(int *a,int n){
int left_max[n]={0},right_max[n]={0};
    left_max[1]=a[0];
for(int i=2;i<n;i++){
    left_max[i]=max(left_max[i-1],a[i-1]);
}
    right_max[n-2]=a[n-1];
for(int i=n-3;i>=0;i--){
    right_max[i]=max(right_max[i+1],a[i+1]);
}
int b[n],capacity=0;
for(int i=0;i<n;i++){
    b[i]=min(left_max[i],right_max[i])-a[i];
   if(b[i]>=0)
    capacity+=b[i];
   // cout<<left_max[i]<<" "<<right_max[i]<<endl;

}
cout<<capacity<<endl;
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	rain(a,n);
	}

