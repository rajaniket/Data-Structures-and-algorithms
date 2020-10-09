//m-1 (find all occurrences of key in the array and store it in a vector using recursion)
#include<iostream>
#include<vector>
using namespace std;
int all_occurence(int *arr,int n,int key,vector<int> &out,int i=0,int Count=0){
if(n==0)
return Count;
if(arr[0]==key)
{
out.push_back(i);
return all_occurence(arr+1,n-1,key,out,i+1,Count+1);
}
return all_occurence(arr+1,n-1,key,out,i+1,Count);
}

int main(){
int n=6;
int arr[]={3,3,3,3,4,3};
int key=3;
vector<int> output;
int Count=all_occurence(arr,n,key,output);
cout<<Count<<endl;
for(int i=0;i<Count;i++)
cout<<output[i]<<" ";
}

/*
// m-2
#include<iostream>
#include<vector>
using namespace std;
int all_occurence(int *arr,int n,int key,vector<int> &out,int i=0){
if(n==0)
return -1;
if(arr[0]==key)
out.push_back(i);
int k=all_occurence(arr+1,n-1,key,out,i+1);
if(arr[0]==key){
if(k==-1)
return 1;
else return k+1;
}
else return k;
}

int main(){
int n=6;
int arr[]={3,3,3,3,4,3};
int key=6;
vector<int> output;
int Count=all_occurence(arr,n,key,output);
cout<<Count<<endl;
for(int i=0;i<Count;i++)
cout<<output[i]<<" ";
}

*/

/*
// print index of all occurrences 

#include<iostream>
#include<vector>
using namespace std;
void all_occurence(int *arr,int n,int key,int i=0){
if(n==0)
return ;
if(arr[0]==key)
cout<<i<<" ";
return all_occurence(arr+1,n-1,key,i+1);
}
int main(){
int n=6;
int arr[]={3,2,3,3,4,3};
int key=3;
all_occurence(arr,n,key);
}
*/
