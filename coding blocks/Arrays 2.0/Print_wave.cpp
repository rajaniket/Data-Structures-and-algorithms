// Read a matrix and Print its wave
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
void wave_print(int a[][10],int r,int c){
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
           if(i&1)cout<<a[r-j-1][i]<<" ";    //if(i%2==0)cout<<a[j][i]<<" ";  or you can also do this , i&1 means the lsb of i and operation with 1,if 0011&0001=>1
                                            // else cout<<a[r-j-1][i]<<" ";
           else cout<<a[j][i]<<" ";
        }
    }}

int main(){
int a[10][10];
int r,c;
cin>>r>>c;
read_matrix(a,r,c);
print_matrix(a,r,c);
cout<<endl<<"........................Wave print.........................."<<endl<<endl;
wave_print(a,r,c);
}
