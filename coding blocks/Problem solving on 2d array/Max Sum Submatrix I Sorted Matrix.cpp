//Max Sum Submatrix In Row Col Wise Sorted Matrix
#include<iostream>
using namespace std;
void max_sum(int a[][10],int m,int n){
    int b[m][n]={0};
for(int i=m-1;i>=0;i--){ //subfix => prefix in reverseway
        int sum=0;
    for(int j=n-1;j>=0;j--){
    b[i][j]=sum+a[i][j];
    sum=b[i][j];
    if(i!=m-1)
    b[i][j]=b[i][j]+b[i+1][j];

}}

cout<<endl;
int Max=INT_MIN;
for(int i=0;i<m;i++)
for(int j=0;j<n;j++){
    Max=max(Max,b[i][j]);
}
cout<<Max<<endl;
}
int main(){
int m=3,n=3;
int a[m][10];
for(int i=0;i<m;i++)
for(int j=0;j<n;j++){
   cin>>a[i][j];
}
max_sum(a,m,n);
}
