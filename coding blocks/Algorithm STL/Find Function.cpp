// Find function in stl
//Containers in STL ---> array,vector,queue,stack,priority_queue,list set,map

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int arr[]={5,40,28,11,33};
int n=sizeof(arr)/sizeof(int);
int key=11;
auto adrs=find(arr,arr+n,key); // you can use int* instead of auto 
int index=adrs-arr; // subtracting base address to find out its index
if(index==n)
    cout<<"Number Not Found"<<endl;
else cout<<"Number present at index "<<index<<endl;
}

// in case of vector
/*
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
vector<int> arr={5,40,28,11,33};
int n=arr.size();
int key=28;
auto adrs=find(arr.begin(),arr.end(),key);
int index=adrs-arr.begin();
if(index==n)
    cout<<"Number Not Found"<<endl;
else cout<<"Number present at index "<<index<<endl;
}
*/

