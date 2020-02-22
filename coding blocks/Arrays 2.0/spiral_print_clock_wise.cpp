// Spiral print of a matrix clock-wise

// input => 4 4 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 48 49 50

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
int end_row=(r-1),start_col=0,start_row=0;;
while(start_row<=end_row&&start_col<=end_co1){

for(int j=start_col;j<=end_co1;j++){
    cout<<a[start_row][j]<<" ";
}
start_row++;

for(int i=start_row;i<=end_row;i++){
    cout<<a[i][end_co1]<<" ";
}
end_co1--;
if(end_row>=start_row){
for(int j=end_co1;j>=start_col;j--){
   cout<<a[end_row][j]<<" ";
}}
end_row--;
if(end_co1>=start_col){
for(int i=end_row;i>=start_row;i--){
    cout<<a[i][start_col]<<" ";
}}
start_col++;
}

}
int main(){
int k=1;
int r,c;
while(k!=0){
cin>>r>>c;
int a[10][10];
read_matrix(a,r,c);
print_matrix(a,r,c);
//search_element(18,a,r,c);
cout<<endl;
spiral_print(a,r,c);
cout<<"\nEnter 1 or 0"<<endl;
cin>>k;;
}
}



