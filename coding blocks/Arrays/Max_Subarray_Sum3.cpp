// Maximum Sub-array Sum , using Kadane's Algo
#include<iostream>
using namespace std;
int main(){
int arr[]={-4,1,3,-2};
int n=sizeof(arr)/sizeof(int);
int current_sum=0,max_sum=0,sum=0;
for(int i=0;i<n;i++){
    if(current_sum+arr[i]>=0){
        current_sum=current_sum+arr[i];
//        if(max_sum<current_sum)
//            max_sum=current_sum;
            max_sum=max(current_sum,max_sum);
    }

}
cout<<"Maximum Sum: "<<max_sum;
}
