

#include<iostream>
#include<algorithm>
using namespace std;
int Max_sub_array_sum(int *a,int n){
    int Max_sum=0,sum=0;
   for(int i=0;i<n;i++){
    sum+=a[i];
    if(sum<0)
    sum=0;
    Max_sum=max(sum,Max_sum);
   }
   return Max_sum;
}

 int Max_ciruclar_sum(int *a,int n){
   int non_cir_sum=Max_sub_array_sum(a,n);
  int sum=0;
  for(int i=0;i<n;i++)
    sum+=a[i];
  cout<<"all="<<sum<<endl;
 for(int i=0;i<n;i++)
 a[i]=a[i]*(-1);
 int reverse_sum=Max_sub_array_sum(a,n);
cout<<"Reverse="<<reverse_sum<<endl;
 int result=sum-reverse_sum;
 if(result>non_cir_sum)
 return result;
 else return non_cir_sum;
}
int main() {

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];

	cout<<"final="<<Max_ciruclar_sum(a,n)<<endl;
	}

