Skip to content
Search or jump to…

Pull requests
Issues
Marketplace
Explore
 
@rajaniket 
rajaniket
/
Data-Structures-and-algorithms
1
10
 Code Issues 0 Pull requests 0 Actions Projects 0 Wiki Security Insights Settings
Data-Structures-and-algorithms/coding blocks/Arrays 2.0/image_rotation.cpp
@rajaniket rajaniket Rotate a square matrix by 90 degree without using any extra space
f412388 on Mar 4
50 lines (42 sloc)  912 Bytes
  
// Image rotation
// Rotate a square matrix by 90 degree without using any extra space
#include<iostream>
#include<algorithm>
using namespace std;
void get_matrix(int a[][10],int n){
for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
{
    cin>>a[i][j];
}
}
void print_matrix(int a[][10],int n)
{
    for(int i=0;i<n;i++){
            cout<<endl;
    for(int j=0;j<n;j++)
    cout<<a[i][j]<<" ";
}}
void transpose(int a[][10],int n){
for(int i=0;i<n;i++)
    for(int j=i;j<n;j++)
        swap(a[i][j],a[j][i]); // swaping first row elements with
}
void flip(int a[][10],int n){
for(int i=0;i<n;i++)
    for(int j=0;j<n-j;j++)
        swap(a[i][j],a[i][n-j-1]); // swaping first row elements with
}


int main(){
int n=4;
//cin>>r;
int a[n][10];
get_matrix(a,n);
print_matrix(a,n);
cout<<"Transposed Matrix"<<endl;
transpose(a,n);
print_matrix(a,n);
flip(a,n);
cout<<"After Rotation"<<endl;
print_matrix(a,n);
}





