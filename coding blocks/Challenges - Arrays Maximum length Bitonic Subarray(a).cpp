//2
//6
//12 4 78 90 45 23
//4
//40 30 20 10
#include<iostream>
using namespace std;
int length(int *a,int n){
int Max=1,inc[n],dec[n];
inc[0]=1;
for(int i=1;i<n;i++){
    inc[i]=1;
  if(a[i-1]<=a[i]){
     Max++;
    inc[i]=Max;
  }
  else Max=1;
}
dec[n-1]=1;
Max=1;
for(int i=n-2;i>=0;i--){
    dec[i]=1;
   if(a[i+1]<=a[i]){
    Max++;
    dec[i]=Max;
  }
  else Max=1;
}
Max=inc[0]+dec[0]-1;
for(int i=1;i<n;i++){
   Max=max((inc[i]+dec[i]-1),Max);
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
	}}

