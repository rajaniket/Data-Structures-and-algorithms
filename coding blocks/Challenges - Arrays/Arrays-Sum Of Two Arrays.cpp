#include<algorithm>
#include<iostream>
using namespace std;
void sum_arrays(int a1,int a2,int n1,int n2){
    int k[n1+1]={0}; //adding 1 if in case any carry at last
    int i=n1--;
int j=n2--;
    int carry=0;
while(i>=0){
if(j>=0)
k[i]=a1[i]+a2[j]+carry;
else k[i]=a1[j]+carry;
carry=k[i]/10;
k[i]=k[i]%10;
i--;
j--;
}
if(carry!=0){
 i=0;
 k[0]=carry;
}
else i=1;
for(i;i<n1;i++)
{
 cout<<k[i]<<", ";

}
cout<<"END"<<endl;
}
void correct(int a1,int a2,int n1,int n2){
if(n1>n2)
    sum_arrays(a1,a2,n1,n2);
else sum_arrays(a2,a1,n2,n1);
}

int main(){
int n1;
cin>>n1;
int a1[n1];
for(int i=0;i<n1;i++){
  cin>>a1[i]
}
int n2;
cin>>n2;
int a2[n2];
for(int i=0;i<n2;i++){
  cin>>a2[i]
}
correct(a1,a2,n1,n2);
}

