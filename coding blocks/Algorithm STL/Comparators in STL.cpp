// How Comparators function works in sorting
#include<iostream>
#include<algorithm>
bool comparator(int a,int b){
return b<a;
}
using namespace std;
void Bubble_Sort(int *arr,int n,bool (&cp)(int a,int b)){
for(int i=0;i<n;i++)
for(int j=1;j<n-i;j++){
    if(cp(arr[j],arr[j-1]))  // it will work on the basis of comparator function
        swap(arr[j-1],arr[j]);
}
}
int main(){
int arr[]={80,3,66,5,2,77,2,100,54};
    int n=sizeof(arr)/sizeof(arr+n);
 for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    Bubble_Sort(arr,n,comparator);
    cout<<"\nAfter sorting"<<endl;
      for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
