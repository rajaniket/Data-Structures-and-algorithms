
#include<iostream>
#include<string.h>
using namespace std;
void insert_diff(string a){
int i=1;
signed char k[2*a.length()];
k[0]=a[0];
int j=1;
while(a[i]!='\0'){
if((int)(a[i]-a[i-1])>=0)
k[j]=(a[i]-a[i-1]+'0');
else
{
k[j]='-';
j++;
k[j]=(a[i-1]-a[i]+'0');
}
j++;
k[j]=a[i];
j++;
i++;
}
k[j]='\0';
cout<<k;
}
int main(){
string a;
cin>>a;
insert_diff(a);
}
