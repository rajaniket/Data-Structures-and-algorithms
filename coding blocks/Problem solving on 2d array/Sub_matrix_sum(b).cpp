//Sum of all sub-matrix from a given matrix
//Method-2  ---> O(n^4)

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
int cum_sum=0;
int temp[r][10]={0};
for(int i=0;i<r;i++){
        cum_sum=0;
for(int j=0;j<c;j++){
        cum_sum+=a[i][j];
    if(i==0)
    temp[i][j]=cum_sum;
    else
    temp[i][j]=cum_sum+temp[i-1][j];
}}
cout<<"Cumulative sum matrix"<<endl; //pre computing
printmatrix(temp,r,c);

for(int i_left=0;i_left<r;i_left++)
    for(int i_right=0;i_right<c;i_right++)
       for(int j_left=i_left;j_left<r;j_left++)
          for(int j_right=i_right;j_right<c;j_right++){
            if(i_left==0&&i_right==0)
                sum+=temp[j_left][j_right];
            else if(i_left==0)
            sum+=temp[j_left][j_right]-temp[j_left][i_right-1];
            else if(i_right==0)
            sum+=temp[j_left][j_right]-temp[i_left-1][j_right];
            else  
            sum+=temp[j_left][j_right]-temp[j_left][i_right-1]-temp[i_left-1][j_right]+temp[i_left-1][i_right-1];
          }
cout<<"sum="<<sum;}
int main(){
    int r,c;
    cin>>r>>c;
  int arr[r][10];
  getmatrix(arr,r,c);
  printmatrix(arr,r,c);
  generate_sum(arr,r,c);
}

