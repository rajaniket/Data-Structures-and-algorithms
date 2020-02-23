//Write a program to create a matrix of alternate rectangles of O and X
// Print this structure
//  O O O O O
//  O x x x O
//  O x O x O
//  O x x x O
//  O O O O O

#include"iostream"
#include"string.h"
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    char a[r][c];
    int start_row=0,start_col=0,end_col=c-1,end_row=r-1,k=0;
while(start_row<=end_row&&start_col<=end_col){
//starting column
for(int i=start_col;i<=end_col;i++)
{
    if(k&1)
     a[start_row][i]='x';
    else
     a[start_row][i]='O';
}
start_row++;
//ending row
for(int i=start_row;i<=end_row;i++)
{
     if(k&1)
     a[i][end_col]='x';
    else
     a[i][end_col]='O';
}
end_col--;
//ending column
if(end_row>=start_row)
for(int i=end_col;i>=start_col;i--)
{
     if(k&1)
     a[end_row][i]='x';
    else
     a[end_row][i]='O';
}
end_row--;
//starting row
if(end_col>=start_col)
for(int i=end_row;i>=start_row;i--)
{
       if(k&1)
     a[i][start_col]='x';
    else
     a[i][start_col]='O';

}
start_col++;
k++;
}
 for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

