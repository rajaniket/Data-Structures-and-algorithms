// Example of vectors withsome of their function
#include<iostream>
#include"vector"
#include<algorithm>
using namespace std;
bool rev(int a,int b){
return a>b;
}
int main(){
vector<int> x(5);
for(int i=0;i<x.size();i++)
{
    cout<<x[i]<<" ";
}
//x.reserve(5);
int n=8;
for(int i=0;i<n;i++){
int temp;
cin>>temp;
x.push_back(temp);
}
cout<<"Vector Capacity : "<<x.capacity()<<endl;
for(int i=0;i<x.size();i++)
{
    cout<<x[i]<<" ";
}
cout<<endl<<"Pushing 6 at end"<<endl;
x.push_back(88);   // Push_back(6) will add an element at the end of vector
cout<<"Vector Capacity : "<<x.capacity()<<endl;
for(int i=0;i<x.size();i++)
{
    cout<<x[i]<<" ";
}
cout<<"\nSize= "<<x.size()<<endl; // x.size() will give number of elements in vector
cout<<endl<<"Removing 88 from the end"<<endl;
x.pop_back();   // Pop_back() will remove an element from the end of vector
cout<<"Vector Capacity : "<<x.capacity()<<endl;
for(int i=0;i<x.size();i++)
{
    cout<<x[i]<<" ";
}
cout<<"\nSize= "<<x.size()<<endl; // x.size() will give number of elements in vector

sort(x.begin(),x.end());
for(int i=0;i<x.size();i++)
{
    cout<<x[i]<<" ";
}
cout<<endl;
sort(x.begin(),x.end(),rev); // sorting
x.clear();
cout<<"\nSize= "<<x.size()<<endl; // x.size() will give number of elements in vector
for(int i=0;i<x.size();i++)
{
    cout<<x[i]<<" ";
}
cout<<"Vector Capacity : "<<x.capacity()<<endl; //How much capacity of vector
cout<<x.max_size()<<endl;// will give maximum limit of extending capacity

}
