//Write a program that determines which row or column in a 2d array of integers has the largest sum
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
void max_sum__row_col(int a[][10],int r,int c){
    int max_sum=0,k=0;
    while(k!=max(r,c)){
    int sum_row=0,sum_col=0;
    if(k<r)
    for(int i=0;i<c;i++){
        sum_col=sum_col+a[k][i];
    }
     max_sum=max(max_sum,sum_col);
    if(k<c)
    for(int j=0;j<r;j++){
        sum_row=sum_row+a[j][k];
    }
    max_sum=max(max_sum,sum_row);
    k++;
}
cout<<"Maximum sum ="<<max_sum<<endl;
}
int main(){
int k=1;
int r,c;
cin>>r>>c;
int a[10][10];
read_matrix(a,r,c);
cout<<endl;
print_matrix(a,r,c);
max_sum__row_col(a,r,c);
}

