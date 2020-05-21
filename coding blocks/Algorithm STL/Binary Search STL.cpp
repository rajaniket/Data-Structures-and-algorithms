// Binary search stl
// binary_search() will state either number is prsent or not in the array 
// Upper_bound and Lower bound will give freq and index number of key 
// lower_bound returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘val’.
// upper_bound returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘val’.
// {10,20,25,27,28,28,28,30,40,45,50,50} , ( key=42 , ub=45 ,lb=45 ) (Key=40, Ub=45, lb=40)
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int arr[]={10,20,25,27,28,28,28,30,40,45,50,50};
int n=sizeof(arr)/sizeof(int);
int key;
cin>>key;
bool result=binary_search(arr,arr+n,key);
if(result){
cout<<"Present"<<endl;
auto LB=lower_bound(arr,arr+n,key);  // you can take int* in place of auto
int index_lb=LB-arr;
cout<<"Lower Bound index is "<<index_lb<<" and the number is "<<arr[index_lb]<<endl; 
int* UB=upper_bound(arr,arr+n,key);
int index_ub=UB-arr;
if(index_ub==n)
    cout<<"UB is not Possible"<<endl;
else
cout<<"Upper Bound index is "<<index_ub<<" and the number is "<<arr[index_ub]<<endl;   
cout<<"Frequency of "<<key<<" is "<<UB-LB;  // subtracting UB and LB will give number of Key prsent in the array 
}
else cout<<"Not Present"<<endl;
}
