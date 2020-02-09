// Maximum Circular Subarray Sum
#include<iostream>
using namespace std;
int kadanes(int *a)
int arr[]={1,-9,-2,4,-8,7,-9,2};
int n=sizeof(arr)/sizeof(int);
int current_sum=0,max_sum=0,sum=0;
for(int i=0;i<n;i++){
    if(current_sum+arr[i]>=0){
        current_sum=current_sum+arr[i];}
        else current_sum=0;
            max_sum=max(current_sum,max_sum);
    }

cout<<"Maximum Sum: "<<max_sum;
}


int main(){

