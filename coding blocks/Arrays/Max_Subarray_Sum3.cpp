// Maximum Sub-array Sum , using Kadane's Algo
// 1 -2 4 2
//sum=>1 0 4 6
//max_sum= 1->4->6
/*

// this program will give zero in case arr[]={-2,-1,-3}
#include<iostream>
using namespace std;
int main(){
int arr[]={1,-2,4,2};
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

*/

#include<iostream>
using namespace std;
int main(){
int arr[]={-2};
int n=sizeof(arr)/sizeof(int);
int current_sum=0,max_sum=INT_MIN,sum=0;
for(int i=0;i<n;i++){
        current_sum=current_sum+arr[i];
        max_sum=max(current_sum,max_sum);
        if(current_sum<0)
            current_sum=0;
    }

cout<<"Maximum Sum: "<<max_sum;
}

