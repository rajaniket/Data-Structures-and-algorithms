// obstacles '.'  -2
// *  +5
//blockade '#' , cannot go further #
// start new line without losing energy
// row wise walk , -1 strength for every step
// strength should always >k
//4 4 5 20
//. . * .
//. # . .
//* * . .
//. # * *
#include<iostream>
using namespace std;
int main(){
int m,n,k,s;
char a[m][n];
cin>>m>>n>>k>>s;
if(k>s){
    cout<<"No"<<endl;
    return 0;
}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
    cin>>a[i][j];
}
int i=0,j=0;
while(s>k&&j<n){
if(a[i][j]=='.')
s=s-2;
else if(a[i][j]=='*')
s=s+5;
else if(a[i][j]=='#'){
j++;
i=0;
continue;
}
if(j<n-1)
s--; //for every step
i++;
if(i>m-1){
j++;
i=0;
}
}
if(s>=k)
    cout<<"Yes"<<endl;
else cout<<"No"<<endl;
cout<<s<<endl;
}


