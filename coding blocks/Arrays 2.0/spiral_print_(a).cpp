// Print Spiral elements of a matrix
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
int i=0,j=0,r1=r,c1=c;
while((c1-1)>0&&(r1-1)>0){
for(j;j<c1;j++){
    cout<<a[i][j]<<" ";
}
j--; // =>j=c-1
i++;
for(i;i<r1;i++){
    cout<<a[i][j]<<" ";
}
i--;  //i=r-1
j--;
for(j;j>=c-c1;j--){

   cout<<a[i][j]<<" ";

}
j++; // j=0
i--;
for(i;i>r-r1;i--){
    cout<<a[i][j]<<" ";
}
i++; // i=1
j++;
c1--;
r1--;
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

