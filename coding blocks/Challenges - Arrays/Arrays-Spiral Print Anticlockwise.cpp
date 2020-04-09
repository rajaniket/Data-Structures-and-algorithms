/*
Take as input a 2-d array. Print the 2-D array in spiral form anti-clockwise.

Input Format
Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

Constraints
Both M and N are between 1 to 10.

Output Format
All M * N integers separated by commas with 'END' written in the end(as shown in example).

Sample Input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample Output
11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END
Explanation
For spiral level anti-clockwise traversal, Go for first column-> last row ->last column-> first row and then do the same traversal for the remaining matrix .
*/
#include<iostream>
using namespace std;
void read_matrix(int a[][20],int m,int n){
for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];
}
void spiral_print(int a[][20],int m,int n){
int ER=m-1,EC=n-1,SR=0,SC=0;
while(ER>=SR&&EC>=SC){
for(int i=SR;i<=ER;i++)
    cout<<a[i][SC]<<", ";
SC++;
for(int i=SC;i<=EC;i++)
    cout<<a[ER][i]<<", ";
ER--;
if(EC>=SC){
for(int i=ER;i>=SR;i--)
    cout<<a[i][EC]<<", ";
}
EC--;
if(ER>=SR){
for(int i=EC;i>=SC;i--)
    cout<<a[SR][i]<<", ";
}
SR++;
}
cout<<"END";
}
int main(){
int m,n;
cin>>m>>n;
int a[20][20];
read_matrix(a,m,n);
spiral_print(a,m,n);
}
