// Find the number location in 2-D array which is sorted along the row and column
// Method-2
// Search using rows
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
int i=0,j=0;
while(c-1>1&&r-1>1){
for(j;j<c;j++){
    cout<<a[i][j]<<" ";
}
j--; // =>j=c-1
i++;
for(i;i<r;i++){
    cout<<a[i][j]<<" ";
}
i--;  //i=r-1
j--;
for(j;j>=0;j--){
   cout<<a[i][j]<<"  ";
}
j++; // j=0
i--;
for(i;i>0;i--){
    cout<<a[i][j]<<" ";
}
i++; // i=1
j++;
c--;
r--;
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

