// rotate() -used to rotate the container
// next_permutation() ==> Given a word, find the lexicographically greater permutation of it.
// For example, lexicographically next permutation of “gfg” is “ggf” and next permutation of “acb” is “bac”.
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    rotate(arr,arr+5,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> arr1={1,2,3,4,5,6,7,8,9,10};
    int n1=arr1.size();
    rotate(arr1.begin(),arr1.begin()+5,arr1.end());
    for(int i=0;i<n1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    int arr2[]={1,2,3};
    int n2=sizeof(arr2)/sizeof(int);
    next_permutation(arr2,arr2+n2); // it generates Lexicographically next permutation that will be greater than real one
    // for each loop is used to access elements of an array quickly without performing initialization, testing and increment/decrement.
     for(int i:arr2)
     cout<<i<<" ";   // 123==> 132  greater than previous
     // it is equivalent to   => for(int i=0;i<n1;i++) cout<<arr1[i]<<" ";
     cout<<endl;
    next_permutation(arr2,arr2+n2);
      for(int i:arr2)
      cout<<i<<" ";    // 132==>213

       cout<<endl;
    next_permutation(arr2,arr2+n2);
      for(int i:arr2)
      cout<<i<<" ";    // 213==>231

}


