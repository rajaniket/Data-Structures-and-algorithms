#include<iostream>
#include<algorithm>
using namespace std;
// 1 2 3 4 5 6 7 8 9
void get_matrix(int a[][3],int r,int c){
for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
{
    cin>>a[i][j];
}
}
void print_matrix(int a[][3],int r,int c)
{
    for(int i=0;i<r;i++){
            cout<<endl;
    for(int j=0;j<c;j++)
    cout<<a[i][j];
}}
void transpose(int a[][3],int r,int c){
for(int i=0;i<1;i++)
    for(int j=0;j<c;j++)
        swap(a[i][j],a[j][i]);
for(int j=c-1;j<c;j++)
    for(int i=1;i<r;i++)
        swap(a[i][j],a[j][i]);
}
int main(){
int r=3,c=3;
//cin>>r;
int a[r][3];
get_matrix(a,r,c);
transpose(a,r,c);
print_matrix(a,r,c);
}






