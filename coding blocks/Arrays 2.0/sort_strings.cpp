//sorting string class array
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
bool rev_comp(string a,string b){
    cout<<a<<"  "<<b<<endl;
    return a>b;
}
int main(){
string arr[]={"potato","zebra","banana","apple","mango","radish","sweet_potato"};
int p=sizeof(arr)/sizeof(string);
cout<<"Total Number of String: "<<p<<endl;

for(int i=0;i<p;i++)
    cout<<arr[i]<<endl;

cout<<"Sorting lexicographically (forward alphabetically )"<<endl<<endl;
sort(arr,arr+(p-1));
for(int i=0;i<p;i++)
    cout<<arr[i]<<endl;
cout<<"\nSorting reverse lexicographically (reverse alphabetically )"<<endl<<endl;
sort(arr,arr+p ,rev_comp); //rev_comp=>comperator function

for(int i=0;i<p;i++)
    cout<<arr[i]<<endl;

}

