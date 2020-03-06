//Sum of all sub-matrix from a given matrix
//Method-1
//using Brute force method
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
    cout<<a[i][j];
}
cout<<endl;
}

void generate_sum(int a[][10],int r,int c){
int sum=0;
for(int i_left=0;i_left<r;i_left++)         // 1
    for(int i_right=0;i_right<c;i_right++)  // 2  , 1&2 will give all left top point
       for(int j_left=i_left;j_left<r;j_left++)        // 4
          for(int j_right=i_right;j_right<c;j_right++) // 5  ,4&5 will give all right bottom point
            for(int m=i_left;m<=j_left;m++)      // 5
              for(int n=i_right;n<=j_right;n++){ // 6  ,5&6 will generate all elements between top point and bottom point
                sum+=a[m][n];
              }
}
int main(){
    int r,c;
    cin>>r>>c;
  int arr[r][10];
  getmatrix(arr,r,c);
  printmatrix(arr,r,c);
  generate_sum(arr,r,c);
}

