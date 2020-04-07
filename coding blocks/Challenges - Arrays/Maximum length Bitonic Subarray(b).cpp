#include<iostream>
using namespace std;
int length(int *a,int n){
int id=0,Max=0;
for(int i=0;i<n;i++){
   int j=i,inc=0,dec=0;
while(j>=1){
if(a[j]>=a[j-1]){
inc++;
j--;
}
else break;
}
j=i;
while(j<n-1){
if(a[j]>=a[j+1]){
dec++;
j++;
}
else break;
}
int len=dec+inc+1;
Max=max(Max,len);
}
return Max;
}
int main() {
    int c;
    cin>>c;
    while(c>0){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<length(a,n)<<endl;
	c--;
	}

	}
