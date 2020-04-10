#include<algorithm>
#include<iostream>
using namespace std;
bool compare(string a,string b){
    string n=a+b;
    string m=b+a;
if(n>m)
return 1;
else return 0;
}
string biggest_number(string *a,int n){
sort(a,a+n,compare);
string k;
k=a[0];
for(int i=1;i<n;i++)
k.append(a[i]);
//cout<<k;
return k;
}
int main(){
	int c;
	cin>>c;
	while(c>0){
int n;
cin>>n;
string a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
cout<<biggest_number(a,n)<<endl;
c--;
}
}
