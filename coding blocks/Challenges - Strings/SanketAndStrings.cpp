#include<iostream>
#include<string.h>
using namespace std;
int length(char *str, int k){
int max_length=0;
int n=strlen(str);
int freq[2]={0};
for(int i=0;i<n;i++){
if(str[i]=='a')
freq[0]++;
else freq[1]++;
}
char alp;
int s=min(freq[0],freq[1]);
if(freq[0]<=freq[1])
    alp='a';
else alp='b';
for(int i=0;i<n;i++)
{
int c=k;
if(str[i]==alp)
s--;
int j=i;
    while(c>=0&&j<n){
     if(str[j]==alp)
     c--;
     if(c<0)
     break;
     j++;
    }
max_length=max(max_length,(j-i));
if(s<k)
break;
}
return max_length;
}
int main(){
int k;
  	cin>>k;
char str[100];
cin>>str;
cout<<length(str,k);
}
