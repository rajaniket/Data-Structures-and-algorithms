// The sort function in STL is more efficient in terms of time complexity than bubble_sort,insertion sort etc.
#include<iostream>
#include<algorithm>
bool comparator(int a,int b){
return b<a;
}
using namespace std;
int main(){
    int arr[]={80,3,66,5,2,77,2,100,54};
    int n=sizeof(arr)/sizeof(arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl<<"After Sorting"<<endl;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    sort(arr,arr+n,comparator);
    cout<<"After 2nd sorting"<<endl;
      for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
