#include<iostream>
#include<string.h>
using namespace std;
bool srch(int key,int a[][10],int m,int n) {
    int i=n-1;
    int j=0;
while(j<m&&i>=0){
   if(a[j][i]==key) {
    return 1;
   }
 else if(a[j][i]>key)
    i--;
 else if(a[j][i]<key)
    j++;
}
return 0;
}
int main(){
int m,n;
cin>>m>>n;
int a[m][10];
for(int i=0;i<m;i++)
    for(int j=0; j<n;j++)
    cin>>a[i][j];
int key;
cin>>key;
cout<<srch(key,a,m,n);
}
