#include<iostream>
#include<cstring>
using namespace std;
void read_matrix(int a[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
}
void print_matrix(int a[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void spiral_print(int a[][10],int r,int c){
int end_co1=(c-1);
int end_row=(r-1),start_col=0,start_row=0;
while(start_col<=end_co1&&start_row<=end_row){
//Starting row

for(int i=start_row;i<=end_row;i++){
    cout<<a[i][start_col]<<" ";
}
start_col++;
//Starting column

for(int j=start_col;j<=end_co1;j++){
    cout<<a[end_row][j]<<" ";
}
end_row--;
//Ending Row
if(start_col<=end_co1){
for(int i=end_row;i>=start_row;i--) { // When column converges this loop will not run
    cout<<a[i][end_co1]<<" ";
}}
