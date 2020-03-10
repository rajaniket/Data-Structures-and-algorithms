//Sum of all sub-matrix from a given matrix
//Method-3 -> O(n^2)
//
#include<iostream>
#include<string.h>

using namespace std;
void getmatrix(int a[][10],int r,int c){
for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    cin>>a[i][j];
}
void printmatrix(int a[][10],int r,int c){
for(int i=0;i<r;i++){
        cout<<endl;
    for(int j=0;j<c;j++)
    cout<<a[i][j]<<" ";
}
cout<<endl;
}
void generate_sum(int a[][10],int r,int c){
int sum=0;
for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
      sum+=a[i][j]*(j+1-0)*(c-j)*(i+1-0)*(r-i); // zero indicates left minimum column or top most row ,c->right most column,r->down most column
// permutation and combination (Adding the occurance of each element in all submatrix)
    cout<<"sum="<<sum;
}
int main(){
    int r,c;
    cin>>r>>c;
  int arr[r][10];
  getmatrix(arr,r,c);
  printmatrix(arr,r,c);
  generate_sum(arr,r,c);
}


