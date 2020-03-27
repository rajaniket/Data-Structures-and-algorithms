// Maximum Circular Sub-array Sum
#include<iostream>
#include<algorithm>
using namespace std;
int kadanes(int *a,int n){
int cs=0,max_sum=0;   // cs=>current sum
for(int i=0;i<n;i++){
    if(cs+a[i]>=0)
        cs+=a[i];
    else cs=0;
    max_sum=max(max_sum,cs);
}
return max_sum;
}
int cumulative_sum(int *a,int n){
    int c_s=0;
for(int i=0;i<n;i++){
    c_s+=a[i];
}
return c_s;
}
int sign_reverse(int k){return -k;}

int max_circular_sum(int *a,int n)
{
int non_cir_sum=kadanes(a,n);
int cuml_sum=cumulative_sum(a,n);
transform(a,a+n,a,sign_reverse); // Reversing the sign
int cir_sum=cuml_sum-(-kadanes(a,n)); // subtracting new kadanes algorithm result with cummulated sum 
return non_cir_sum>=cir_sum?non_cir_sum:cir_sum;
}

int main(){
    int a[]={10,-3,-4,7,6,5,-4,-1};
    int n=sizeof(a)/sizeof(int);
    cout<<"Max Sum : "<<max_circular_sum(a,n);

}

