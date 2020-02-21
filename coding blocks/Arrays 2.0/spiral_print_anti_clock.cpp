// Print Spiral elements of a matrix anticlock wise
// input => 4 4 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16

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
if(start_row>end_row){
for(int i=start_row;i<=end_row;i++){
    cout<<a[i][start_col]<<" ";
}}
start_col++;
//Starting column
if(start_col<end_co1){
for(int j=start_col;j<=end_co1;j++){
    cout<<a[end_row][j]<<" ";
}}
end_row--;
//Ending Row
for(int i=end_row;i>=start_row;i--) {
    cout<<a[i][end_co1]<<" ";
}
end_co1--;
//Ending Column
for(int j=end_co1;j>=start_col;j--){
    cout<<a[start_row][j]<<" ";
}
start_row++;
}

}
int main(){
int a[10][10];
int r,c;
cin>>r>>c;
read_matrix(a,r,c);
print_matrix(a,r,c);
//search_element(18,a,r,c);
spiral_print(a,r,c);
}


