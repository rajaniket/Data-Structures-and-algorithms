/*Given a 2D array of size N x N. Rotate the array 90 degrees anti-clockwise.

Input Format
First line contains a single integer N. Next N lines contain N space separated integers.

Constraints
N < 1000

Output Format
Print N lines with N space separated integers of the rotated array.

Sample Input
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Sample Output
4 8 12 16 
3 7 11 15 
2 6 10 14 
1 5 9 13 
Explanation
Rotate the array 90 degrees anticlockwise.
*/
#include<iostream>
using namespace std;
void read_matrix(int a[][20],int n){
for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];
}
void rotate_image(int a[][20],int n){
for(int j=0;j<=n-j-1;j++)
for(int i=0;i<n;i++){
swap(a[i][j],a[i][n-j-1]);
}
for(int i=0;i<n;i++){
for(int j=i;j<n;j++){
swap(a[i][j],a[j][i]);
}}
for(int i=0;i<n;i++){
        cout<<endl;
for(int j=0;j<n;j++)
    cout<<a[i][j]<<" ";
}
}
int main(){
int n;
cin>>n;
int a[20][20];
read_matrix(a,n);
rotate_image(a,n);
}
