
//Write Bubble Sort on 2-D array
#include<iostream>
#include<string.h>
using namespace std;
void swap_2d(int *a1,int *a2){
int temp=*a1;
*a1=*a2;
*a2=temp;
}
int main(){
int a[][4]={{5,8,6,7},{2,2,8,3},{1,9,8,7}};
int n=sizeof(a)/(4*(sizeof(int))); // n=number_of_rows
cout<<n;
for(int i=0;i<n;i++){
cout<<"{";
for(int j=0;j<4;j++){
    cout<<a[i][j]<<",";
}
cout<<"}"<<endl;
}


for(int i=0;i<n-1;i++){
for(int j=0;j<n-1;j++){
if(a[i][0]>a[i+1][0])
    swap_2d(a[i],a[i+1]);  // or you can use swap(a[i],a[i+1]) function directly
}
cout<<"\nafter sorting"<<endl<<endl;
for(int i=0;i<n;i++){
cout<<"{";
for(int j=0;j<4;j++){
    cout<<a[i][j]<<",";
}
cout<<"}"<<endl;
}
}
